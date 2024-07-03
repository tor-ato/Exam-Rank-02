

#include <unistd.h>
#include <stdio.h>


void	print_char(char *c)
{
	write(1, c, 1);
	return ;
}
void 	print_str(char *s)
{
	while(*s ==  ' ' || *s == '\t')
			s++;
	while(*s)
	{
		if((*s ==  ' ' || *s == '\t') && (*(s + 1)  != 0))
			print_char(" ");
		while(*s ==  ' ' || *s == '\t')
			s++;
		if(*s)
		{
			print_char(s);
			s++;
		}
	}
	return ;
}


int main(int argc,char *argv[])
{
	if(argc == 2)
		print_str(argv[1]);
	print_str("\n");
	return 0;
}
