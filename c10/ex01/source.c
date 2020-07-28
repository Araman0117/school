//#include <unistd.h>
#include "headers.h"

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

void  put_into_file(int i, char *argv[], char *str)
{
  int k;
  int fd;

  k = 1;
  while (k < i)
  {
    fd = open(argv[k], O_RDONLY);
    read(fd, str, 29696);
    k++;
  }
  close(fd);
  fd = open(argv[i + 1], O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
  write(fd, str, 29696);
  close(fd);
}
