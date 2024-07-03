
#include <unistd.h>
#include <stdio.h>

int         is_power_of_2(unsigned int n);

int         is_power_of_2(unsigned int n)
{
	if (n == 0)
		return  0;
	if (n == 1)
		return  1;
	if(n <= 2 && n % 2 == 0)
		return (1);
	else if(n % 2 == 0)
	{
		if(is_power_of_2(n/2))
			return 1;
	}
	else
		return (0);
	return (0);

}

// int main(void)
// {
// 	int x = 0;
// 	while(x <= 100)
// 		printf("x = %d , %d  \n", x,is_power_of_2(x++));
// 			// printf("x = %d , %d  \n", 4,is_power_of_2(4));
// 	return 0;
// }
