#include <unistd.h>

void	print_input(char *str)
{
	int ret;

	while (1)
	{
		if ((ret = read(0, str, 29696)) < 1)
			break;
		while (*str)
		{
                	write(1, str, 1);
                        *str = '\0';
                        str++;
		}
	}
}
