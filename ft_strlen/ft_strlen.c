int     ft_strlen(char *str)
{
	int i = 0;

	while(*str)
	{
		str++;
		i++;
	}

	return i;
}

// #include <stdio.h>


// int main(void)
// {
// 	char a[] = "12345";
// 	printf("%d\n",ft_strlen(a));
// 	return 0;
// }
