#include<stdio.h>

int main()
{
	int i, j, count, l, Mword[100], Mnum = 0;
	char word[100] ;
	
	scanf("%d", &count);
	
	for( i = 0; i < count; i++ )
	{
		scanf("%s", word);
		l = 0;
		while( word[l] != '\0' )
		{
			l++;
		}
		Mword[i] = l;	
		//printf("%s %d ", word, l);			
	}
	
	for( i = 0; i < count; i++ )
	{
		//printf(	"\n%d",Mword[i]);
		for( j = i + 1; j < count; j++ )
		{
			if( Mword[i] > Mword[j] )
				Mnum = Mword[i];
		}
	}
	printf("%d", Mnum);
	
	return 0;
}
