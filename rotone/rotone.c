#include <unistd.h>

int	ft_isupper(int c)
{
	return (c >= 65 && c <= 90);
}

int	ft_islower(int c)
{
	return (c >= 97 && c <= 122);
}

int	ft_isalpha(int c)
{
	return (ft_isupper(c) || ft_islower(c));
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

void	ft_putcharrot(char c)
{
	if (ft_isalpha(c))
	{
		if (c == 'Z')
			c = 'A';
		else if (c == 'z')
			c = 'a';
		else
			c++;
	}
	write(1, &c, 1);
}

void	ft_putstrrot(char *str)
{
	while (*str)
		ft_putcharrot(*str++);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_putstrrot(&argv[1][0]);
	}
	ft_putstr("\n");
	return (0);
}
