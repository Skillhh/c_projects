#include<stdio.h>

#define CHARACTER	'C'
#define INTEGER 	'I'
#define FLOAT		'F'

struct generic_tag{
	char type;
	union shared_tag{
		char 	c;
		int 	i;
		float 	f;
	}shared;
};

void print_function( struct generic_tag generic );

int main()
{
	struct generic_tag var;
	
	var.type = CHARACTER;
	var.shared.c = '$';
	print_function( var );
	
	var.type = FLOAT;
	var.shared.f = 	12345.67890;
	print_function( var );
	
	var.type = 'x';
	var.shared.i = 111;
	print_function( var );
}
void print_function( struct generic_tag generic )
{
	printf("\n\nThe generic value is ... ");
	switch( generic.type )
	{
		case CHARACTER:	printf("%c", generic.shared.c);
						break;
		case INTEGER:	printf("%d", generic.shared.i);
						break;
		case FLOAT: 	printf("%f", generic.shared.f);
						break;
		default:		printf("an unknown type: %c", generic.type);	
	}
}
