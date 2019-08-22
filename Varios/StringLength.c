#include <stdio.h>
int main(void) 
{
    char word[30];
    int i = 0;
    
    printf("Please enter a word: ");
    scanf("%s", word);
    
    while (word[i]!='\0') 
        i++;
        
    printf("%s has word length %d.\n", word, i);
    
    return 0;
}
