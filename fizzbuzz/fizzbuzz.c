#include <unistd.h>
#include <stdio.h>

void	print_char(char *c)
{
	write(1, c, 1);
	return ;
}
void 	print_str(char *s)
{
	while(*s)
		print_char(s++);
	return ;
}

void	print_number(int i)
{
	char	c[] = " ";
	if (i < 10)
	{
		*c = i + 48;
		print_char(c);
	}else
	{
		print_number(i / 10);
		print_number(i % 10);
	}
	return ;
}

int	main(void)
{
	int	i;

	i = 1;
	while (i < 100)
	{
		if(i%3==0 && i%5==0)
			print_str("fizzbuzz\n");
		else if(i%3==0)
			print_str("fizz\n");
		else if(i%5==0)
			print_str("buzz\n");
		else
		{
			print_number(i);
			print_char("\n");
		}
		i++;
	}
	print_str("buzz");
	print_char("\n");
	return (0);
}
