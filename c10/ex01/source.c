#include "headers.h"

void	print_input(char *str)
{
	while (1)                                                                  {
		read(2, str, 29696);
		while (*str)
		{
                	write(1, str, 1);
                        *str = '\0';
                        str++;                                                             }
        }
}
