#include <stdio.h>

void print_char(char* c)
{
	printf("print in char %c\n", &c);
	printf("print in deci %d\n", &c);
}

/// 0 ok -1 stop
int gchar(char* source, int sz)
{
	int c;
	c = getchar();
	int str_ln = 0;

	if(c<=0)
	{
		return -1;
	}

	while(c != EOF&& c != 10)
	{
		if (c >= ' ' && c <= '~')
		{
			source[str_ln] = (char)c;
			str_ln++;
		}
		c = getchar();
	}
	source[str_ln] = '\0';
	return 0;
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
	
	for(;;)
	{
		printf("input:\n");
		if (gchar(str,SZ) == -1)
		{
			return 0;
		}
		printf("print output:\n%s\n", str);
	}
	
	return 0;
}

