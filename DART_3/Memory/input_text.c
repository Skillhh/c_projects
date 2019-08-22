#include<stdio.h>

int main(){
    char words[3][10];
    int i; 

    for(i = 0; i < 3; i++ ){
        scanf("%s", words[i]); 
    }
    
    for(i = 2; i >= 0; i-- ){
        printf("%s ", words[i]);
        
    }
    return 0;
}
