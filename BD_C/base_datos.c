#include<stdio.h>
#include<stdlib.h>
#include<mysql/mysql.h>

#define HOST "localhost"
#define USER "root"
#define PASS "Alice1785"
#define DB "agenda"

void muestra( MYSQL* con, char* consulta0, MYSQL_ROW row, MYSQL_RES *res );
void agrega( MYSQL * con, char* persona, char* telefono );
void elimina( MYSQL *con, char* eliminar );
void modifica_tel( MYSQL *con, char* new_tel, char* per_tel );

int main(void){

	MYSQL *con;
	MYSQL_ROW row;
	MYSQL_RES *res;

	char persona[20], eliminar[20], per_tel[20];
	char telefono[10], new_tel[10];
	char consulta0[1024];
	int opcion=1;

	con=mysql_init(NULL);

	if(!mysql_real_connect( con, HOST, USER, PASS, DB, 3306, NULL, 0 )){
		fprintf(stderr, "%s\n", mysql_error(con));
		return 1;
	}
	fprintf(stdout, "-> Conectando a Base de datos: %s\n", DB);
	sprintf(consulta0, "SELECT * FROM persona ");
	do{
	getchar();
	system("clear");
	fprintf(stdout,"------------------------------");
	fprintf(stdout,"-------------Menu-------------");
	fprintf(stdout,"| 0 - Salir		\t\t |\n");
	fprintf(stdout,"| 1 - Mostrar personas	\t\t |\n");
	fprintf(stdout,"| 2 - Insertar persona  \t\t |\n");
	fprintf(stdout,"| 3 - Eliminar persona  \t\t |\n");
	fprintf(stdout,"| 4 - Mosdificar telefono de persona |\n");
	fprintf(stdout,"------------------------------");
	fprintf(stdout,"-------------opcione:---------");
	fscanf(stdin, " %d", &opcion);
	switch(opcion)
	{
		case 0: break;
		case 1:
			fprintf(stdout, "\n---------- Todos los Contactos ----------\n");
	   		fprintf(stdout, "\nDatos actuales en la DB\n");
	   		muestra(con, consulta0, row, res);
	   		getchar();
	 	break;
	 	case 2:
			fprintf(stdout, "\n---------- Agregar Persona ----------\n");
			fprintf(stdout, "Ingrese el nombre de la persona: \n");
			fscanf(stdin, "%s", &persona);
			fprintf(stdout, "\nIngrese el telefono de l persona: \n");
			fscanf(stdin, "%s", &telefono);
			agrega(con, persona, telefono);
		break;
		case 3:
			fprintf(stdout, "\n---------- Eliminar Persona ----------\n");
			fprintf(stdout, "Ingrese el nombre de la persona: \n");
			fscanf(stdin, "%s", &eliminar);
			elimina(con, eliminar);
		break;
		case 4:
			fprintf(stdout, "\n---------- Modificar Persona ----------\n");
			fprintf(stdout, "Ingrese el nuevo nombre: \n");
			fscanf(stdin, "%s", &per_tel);
			fprintf(stdout, "Ingrese el nuevo numero de telefono: " );
			fscanf(stdin, "%s", &new_tel);
			modifica_tel(con, new_tel, per_tel);
		default:
			fprintf(stdout, "Opcion no valida, intentelo nuevamente: \n");
	}
	}while(opcion!=0);

	mysql_close(con);
	fprintf(stdout,"\n--> Desconectando la base de datos: %s\n", DB);
	return 0;

}

void muestra(MYSQL* con, char* consulta0, MYSQL_ROW row, MYSQL_RES *res)
{
	if( mysql_query(con, consulta0) == 0 )
	{
		res = mysql_use_result(con);
			printf("| Nombre |\tTelefono|\n");
			printf("----------------------------\n");
		while(( row = mysql_fetch_row(res)))
		{
			printf("| %s\t|", row[0]);
			printf("%s\t|\n", row[1]);

		}
		if(!mysql_eof(res))
		{
			printf("Error de lectura: [%s]\n", mysql_error(con));
		}

	}

}
void agrega( MYSQL* con, char* persona, char* telefono)
{
	char consulta[1024];
	sprintf(consulta, "INSERT INTO persona VALUES('%s','%s')", persona, telefono);
	if(mysql_query(con, consulta) == 0 ) fprintf(stdout, "\nDatos insertados con exito\n");
}
void elimina(MYSQL *con, char* eliminar)
{
	char consulta[1024];
	sprintf(consulta, "DELETE FROM persona WHERE nombre='%s'", eliminar);
	if(mysql_query(con, consulta) == 0 ) fprintf(stdout, "\nPersona eliminada con exito.\n");

}
void modifica_tel(MYSQL* con, char* new_tel, char* per_tel)
{
	char consulta[1024];
	sprintf(consulta, "UPDATE persona SET telefono='%s' WHERE nombre='%s'", new_tel, per_tel);
	if(mysql_query(con, consulta) == 0) fprintf(stdout, "\nNo de Telefno modificado con exito.\n");
}
