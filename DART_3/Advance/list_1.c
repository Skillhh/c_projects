#include<stdio.h>
#include<stdlib.h>

struct point{
	int x;
	int y;
	struct point * next;
};

void printPoints( struct point *start );

int main(void){
	struct point pt1 = {4, 3, NULL};
	struct point pt2 = {8, 10, NULL};
	struct point pt3 = {18, 20, NULL};

	//struct point * start, * end;
	struct point * start;

	start = &pt1;
	pt1.next = &pt2;
	pt2.next = &pt3;
	
	printPoints(start);
	//end = start;
	/*
	while( end != NULL){
		printf("(%d, %d)\n",end->x, end->y);	
		end = end->next;
	}*/

	return 0;
}
void printPoints( struct point * start ){
	struct point * end;
	end = start;
	while(end != NULL){
		printf("(%d, %d)\n", end->x, end->y);
		end = end->next;	
	}
}
