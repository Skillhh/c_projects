#include <stdio.h>
#include <string.h>

int main()
{
 	char buffer[98] = "This is string.h library function";
	puts(buffer);
	memset(buffer,'#' , 4);
	puts(buffer);

	return 0;
}
