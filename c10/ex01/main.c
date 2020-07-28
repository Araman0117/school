
#include "headers.h"

int	main(int argc, char *argv[])
{
	long long int	sizef;
	int		fd;
	int		i;
	char		buf[29696];
	char		*str;

	if (argc < 2)
	{
	//	while (1)
	//	{
	//		str = buf;
	//		read(2, buf, 29696);
	//		while (*str)
	//		{
	//			write(1, str, 1);
	//			*str = '\0';
	//			str++;
	//		}
	//	}
		print_input(buf);
	}
	else
	{
		i = 1;
		while (i < argc)
		{
			fd = open(argv[i], O_RDONLY);
			while ((sizef = read(fd, buf, 1)) > 0)
				write(1, buf, 1);
			if (sizef < 0)
			{
				write(1, "Cannot read file - ", 19);
				str = argv[i];
				while (*str)
				{
					write(1, str, 1);
					str++;
				}
				write(1, "\n", 1);
			}
			close(fd);
			i++;
		}
		return (0);
	}
}
