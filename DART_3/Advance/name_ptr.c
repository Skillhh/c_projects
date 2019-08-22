#include<stdio.h>
#include<stdlib.h>

struct student{
	char name[50];
};

//void create_name(char []);

struct student * createName( char []);

int main( void ){
	struct student * std;
	char myname[50];
	scanf("%s", myname);
	std = createName(myname);
	printf("Nombre: %s\n",std->name);
	//char * n;
	//create_name(&name);
	//printf("%s", n);
	return 0;
}
struct student * createName(char MyName[]){
	struct student * ptr;
	ptr = (struct student * ) malloc(sizeof(struct student));
	strcpy(ptr->name, MyName);
	return ptr;
}
/*
void create_name(char nam[]){
	char * nom;
	nom = (char *)malloc(50*sizeof(int));
	nom = nam;
	printf("%s", nom);
}*/
