
#include "headers.h"

int	main(int argc, char *argv[])
{
	int	sizef;
	int	fd;
	int	i;
	char	buf[29696];

	if (argc < 2)
	{
		print_input(buf);
	}
	else
	{
		i = 1;
		while (i < argc)
		{
			if ((*argv[i] == '-') && (*argv[i + 1] == '\0'))
			{
				print_input(buf);
			}
			else
			{
				fd = open(argv[i], O_RDONLY);
				while ((sizef = read(fd, buf, 1)) > 0)
					write(1, buf, 1);
			}
			close(fd);
			i++;
		}
		return (0);
	}
}
