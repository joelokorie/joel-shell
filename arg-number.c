#include <stdio.h>

int main(int ac, char *av[])
{
	int x = 0;

	while (av[x] != NULL)
	{
		printf("%s\n", av[x]);
		x++;
	}
	return(0);
}
