#include <stdio.h>

void print_char(char c)
{
	printf("print in char %c\n", &c);
	printf("print in deci %d\n", &c);
}
/*
void put_char(char* target, char c)
{
	target = c;
}
*/
#define SZ 255
int main(void)
{
	char str[SZ] = "";
	int str_ln = 0;
	for(;;)
	{

		int c;

		printf("input:\n");

		c = getchar(); //input contoh; abc
		if (c<=0) 
		{
			// asumsi semua yang dibawah -1, return / exit appk
			return 0;
		}

		printf("print dari c %d\n", c); //output: int 'a'
		str_ln = 0;
		while (c != EOF && c != 10){ //line feed
			if (c >= '!' && c <= '~')
			{	
				printf("print char %c || int %d", c, c);
				str[str_ln] = (char)c;
				str_ln++;
			}
			
			//int i = putchar(c);

			c = getchar();
		}
		printf("inputed words > %s\n", str);
	}
	return 0;
}

