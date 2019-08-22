#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *fp;
    char filename[20];
    char mode[4];
    char line[5][10];


    fp = fopen("text.txt", "w");
    
    printf("Escribe una linea: \n");
    for(int i = 0; i < 5; i++){
    
        gets(line[i]);
        if( i == 5 || line[i] == '\0')
            break;
    }

    for(int i = 0; i < 5; i++ ){
        fprintf(fp, "\n%s\n", line[i]);
        fprintf(stdout,"\n%s\n", line[i]);
    }

    fclose(fp);

    return 0;
}
