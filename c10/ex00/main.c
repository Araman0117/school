
#include <fcntl.h>
//#include <sys/types.h>
//#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>

int	main(int argc, char *argv[])
{
	long long int	sizef;
	int		fd;
	char		buf[1];

	if (argc < 2)
	{
		write(1, "File name missing.\n", 19);
		return (0);
	}
	else if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		while ((sizef = read(fd, buf, 1)) > 0)
			write(1, buf, 1);
		if (sizef < 0)
			write(1, "Cannot read file.\n", 18);
		close(fd);
		return (0);
	}
	else
        {
                write(1, "Too many arguments.\n", 20);
                return (0);
	}
}
