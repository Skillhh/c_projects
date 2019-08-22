#include <stdio.h>
#include <stdlib.h>
void get_y_or_n(void)
{
	char *response = NULL;
	size_t len;
	printf("Continue? [y] n: ");
	if((getline(&response, &len, stdin) < 0) || (len && response[0] == 'n')) {
		free(response);
		exit(0);
	}
	free(response);
	return;
}
int main(void)
{
	get_y_or_n();
}
