#include<stdio.h>
#include<stdlib.h>

struct point{
	int x;
	int y;
	struct point * next;
};

void printPoints( struct point * start );
struct point * append(struct point * end, struct point * newpoint);

int main(void){
	struct point pt1 = { 5, 8, NULL};
	struct point pt2 = { 45, 9, NULL};
	struct point pt3 = { 50, 58, NULL};
	struct point pt4 = { 20, 7, NULL};

	struct point * start , * end;

	start = end = &pt1;
	end = append(end, &pt2);
	end = append(end, &pt3);
	end = append(end, &pt4);

	printPoints(start);

	return 0;
}
void printPoints( struct point * start ){
	struct point * end;
	end = start;
	while(end != NULL ){
		printf("(%d, %d)\n", end->x, end->y);
		end = end->next;
	}

}
struct point * append(struct point * end, struct point * newpoint){
	end->next = newpoint;
	return (end->next);
}
