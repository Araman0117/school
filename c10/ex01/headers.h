
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>

void	print_input(char *str);

void  put_into_file(int i, char *argv[], char *str);
