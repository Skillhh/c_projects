#include <stdio.h>
int main(void)
{
    char word[51];
    int length = 0;
    int i, j;
    char swap;
    int repeats = 0;

    scanf("%s", word);

    while ( word[length] != '\0' )
	length++;

    //Sort the word by alphabetical order
    for( j = 0; j < length-1; j++)
    {
        for(i = 0; i < length-1; i++)
        {
            if ( word[i] > word[i+1])
            {
                swap = word[i];
                word[i]   = word[i+1];
                word[i+1] = swap;
            }
        }
    }

//printf( "%s", word );



    i = 0;

    //Check for repeating characters in the sorted word
    while ( i < length-1)
    {
        if ( word[i] == word[i+1] )
        {
            repeats++;
            j = i+2;

            //Continues through the word until it reaches a new character
            while ( j < length && word[i] == word[j] )
                j++;

            i = j;

        }
        else
        {
            i++;
        }
    }

    printf("%d", repeats);

    return 0;
}
