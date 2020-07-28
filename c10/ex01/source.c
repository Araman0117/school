#include "headers.h"

void	print_input(char *str)
{
	while (1)
	{
		if (read(2, str, 29696) < 1)
			break;
		while (*str)
		{
                	write(1, str, 1);
                        *str = '\0';
                        str++;
		}
	}
}
