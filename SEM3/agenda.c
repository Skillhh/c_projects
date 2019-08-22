/* Nombre del programa: week3.c */
/* Programa para dar nombres y numeros de telefono. */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

#define YES	1
#define NO	0
#define REC_LENGTH	54

struct record{
	char fname[15+1];
	char lname[20+1];
	char mname[10+1];
	char phone[9+1];
}rec;

int main( int argc, char * argv[]);
void display_usage(char *filename);
int display_menu(void);
void get_data(FILE *fp, char *progname, char *filename);
void display_report(FILE *fp);
int continue_function(void);
int look_up(FILE *fp);

int main(int argc, char *argv[]){

	FILE *fp;
	int cont = YES;
	int ch;

	if( argc <2 ){
		display_usage(argv[0]);
		exit(1);
	}

	if(( fp = fopen( argv[1], "a+" )) == NULL ){
		fprintf(stderr, "%s(%d) -- Error opening file %s", 
								argv[0], __LINE__, argv[1]);
		exit(1);
	}

	while( cont == YES ){
		switch( display_menu() ){
			case '1': 
				get_data(fp, argv[0], argv[1]);
				break;
			case '2':
				display_report(fp);
				break;
			case '3':
				look_up(fp);
				break;
			case '4':
				printf("\n\nThank you for using this program!");
				cont = NO;
				break;
			default:
				printf("\n\nInvalid choice, Please select 1 to 4!");
				break;
		}
	
	}
	fclose(fp);
	return 0;
}
/* Display Menu */
int display_menu(void){
	int ch;

	printf("\n");
	printf("\n		MENU");
	printf("\n	==========\n");
	printf("\n1.	Enter names");
	printf("\n2.	Print report");
	printf("\n3.	Look up number");
	printf("\n4.	Quit");
	printf("\n\nEnter Selection ==> ");

	return (getchar());

}
/* Get data */
void get_data( FILE *fp, char *progname, char *filename){
	int cont = YES;

	while( cont == YES ){
		printf("\n\nPlease enter information: ");
		printf("\n\nEnter first name: ");
		gets(rec.fname);

		printf("\nEnter middle name: ");
		gets(rec.mname);

		printf("\nEnter last name: ");
		gets(rec.lname);

		printf("\nEnter phone in 123-4567 format: ");
		gets(rec.phone);

		if( fseek( fp, 0, SEEK_END) == 0 )
			if( fwrite( &rec, 1, sizeof(rec), fp) != sizeof(rec)){
				fprintf(stderr, "%s(%d) --Error writeing to file %s",
										progname, __LINE__, filename);
				exit(2);
			}
		cont = continue_function();
	}
}
/* Display report */
void display_report(FILE *fp){
	time_t rtime;
	int num_of_recs = 0;

	time(&rtime);

	fprintf(stdout, "\n\nRun time: %s", ctime(&rtime));
	fprintf(stdout, "\nPhone number report\n");

	if(fseek( fp, 0, SEEK_SET) == 0){
		fread(&rec, 1, sizeof(rec), fp);
		while(!feof(fp)){
			fprintf(stdout, "\n\t%s, %s %c %s", rec.lname,
								rec.fname, rec.mname[0],
								rec.phone);
			num_of_recs++;
			fread(&rec, 1, sizeof(rec), fp);
		}
		fprintf(stdout, "\n\nTotal number of records: %d",
						num_of_recs);
		fprintf(stdout, "\n\n* * * End of Report * * *");
	}else
		fprintf(stderr, "\n\n*** ERROR WITH REPORT ***\n");
}
/* continue_function */
int continue_function(void){
	char ch;

	do{
		printf("\n\nDo you wish to enter another? (Y)es/(N)o ");
			ch = getchar();
	}while( strchr("NnYy", ch) == NULL);

	if(ch == 'n' || ch == 'N')
		return(NO);
	else
		return(YES);
}
/* Display usage */
void display_usage( char *filename ){
	printf("\n\nUSAGE: %s filename", filename);
	printf("\n\n		where filename is a file to store people\'s names");
	printf("\n		and phone numbers.\n\n");
}
/* Look up */
int look_up( FILE *fp ){
	char tmp_lname[20+1];
	int ctr = 0;
	fprintf(stdout, "\n\nPlease enter last name to be found: ");
	gets(tmp_lname);

	if(strlen(tmp_lname) != 0){
		if(fseek(fp, 0, SEEK_SET) == 0){
			fread(&rec, 1, sizeof(rec), fp);
			while(!feof(fp)){
				if( strcmp(rec.lname, tmp_lname) == 0){
					fprintf(stdout,  "\n%s %s %s - %s", rec.fname,
														rec.mname,
														rec.lname,
														rec.phone);
					ctr++;
				}
				fread(&rec, 1, sizeof(rec), fp);
			}
		}
		fprintf(stdout, "\n\n%d names matched. ", ctr);
	}
	else{
		fprintf(stdout, "\nNo name entered.");
	}
	return(ctr);
}
