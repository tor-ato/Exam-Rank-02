
#include <stdio.h>
#include <unistd.h>

int	main(int argc, char **argv)
{
	argv++;
	if (argc == 2)
	{
		while (**argv)
		{
			if (**argv >= 65 && **argv <= 90)
				**argv = 90 - **argv + 65;
			if (**argv >= 97 && **argv <= 122)
				**argv = 122 - **argv + 97;
			write(1, (*argv)++, 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}
