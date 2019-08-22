#include<stdio.h>

void imprimir_matriz( int (*mp)[2], int n);

int main(){

	int matriz[3][2] = { {1, 2}, {3, 4}, {5, 6}};

	imprimir_matriz( matriz, 3 );

}
void imprimir_matriz( int (*mp)[2], int n ){

	int *m;
	m =  ( int *) mp;

	for(int i = 0; i < ( 2 * n ); i++ ){
		printf("%d", *m++);
	}
}
