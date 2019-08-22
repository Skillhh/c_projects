#include<stdio.h>

int main()
{
	//Show array ( word cursors[i])
	char word[51];//array of characetrs (string)
	printf("Please enter a word with 50 letters: ");
	scanf("%s", word);
	printf("The word read is: %s", word);
	printf("\nThe characters are: <%c> <%c> <%c> <%c>", word[0], 
			word[1], word[2], word[3], word[4]);
		
	word[1] = 'a';
	
	printf("\nThe new word is: %s", word);
	return 0;
}
