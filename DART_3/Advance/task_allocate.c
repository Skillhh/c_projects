#include <stdio.h>
#include <stdlib.h>

struct point{
	int x;
	int y;
};

void printPoint(struct point);
void printPoly(struct point *, int);
void initializePoly(struct point *, int);

int main(void) {
    
    // Fill in your main function here
	struct point * polygon;
	int i, num=4;

	polygon = (struct point * ) malloc(num * sizeof(struct point));

	for(i = 0; i < num; i++ ){
		initializePoly(&polygon[i],num);
	}

	printPoly(polygon, num);
	
	return 0;
}

void printPoint(struct point pt) {
    printf("(%d, %d)\n", pt.x, pt.y);
}

void printPoly(struct point *ptr, int N) {
    int i;
    for (i=0; i<N; i++) {
        printPoint(ptr[i]);
    }
}

void initializePoly(struct point * ptr, int N ){ // Write your initializePoly() function here
	for(int i = 0; i < N; i++){
		ptr[i].x=-i;
		ptr[i].y=i*i;
	}

}
