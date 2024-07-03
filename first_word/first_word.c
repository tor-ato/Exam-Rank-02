#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		argv++;
		while (**argv <= 32 && *(*argv + 1))
			(*argv)++;
		while (!(**argv <= 32) && **argv)
			write(1, (*argv)++, 1);
	}
	write(1, "\n", 1);
	return (0);
}
