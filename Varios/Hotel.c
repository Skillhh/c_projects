#include<stdio.h>

int main(void)
{
    int peso, edad, saldo;
    
    scanf("%d", &edad);
    scanf("%d", &peso);
    
    if( edad == 60 )
    {
    	printf("%d", saldo = 0);
	}else if(edad < 10 )
    {
        saldo = 5;
        printf("%d", saldo);
    }else if( edad > 10 || edad > 60 )
	  {
	    if( peso > 20 )
	    {
	       saldo = 30 + 10;
	       printf("%d", saldo);
	    }else 
	    {
	        saldo = 30;  
	        printf("%d", saldo);
	    }
	  }    
    
    
    return 0;
}
