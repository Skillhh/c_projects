#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>

void detect_mouse();
void show_mouse();
union REGS in,out;

void main(){
	
	detect_mouse();
	show_mouse();

	getchar();

}

void detect_mouse(){

	in.x.ax=0;

	int86(0x33,&in,&out);

	if(out.x.ax==0)
			printf("Mouse failed to initialize !");
	else
		printf("Mouse is Initialized successfully !");

}
void show_mouse(){

	int gd=DETECT,gm;

	initgraph(&gd,&gm,"C:\\turboc3\\bgi");

	in.x.ax=1;

	int86(0x33,&in,&out);

}
