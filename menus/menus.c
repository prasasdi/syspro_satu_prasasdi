#include <stdio.h>

void flushInput(void); //proto untuk flush stdin

int select(void)
{
	char c;
	scanf("%c",&c);
	return c - '0';
}

int main(void)
{
	int c;
	char* menus[] =
	{
		"1. Do A",
		"2. Do B",
		"x. Exit"
	};

	int menu_sz = sizeof(menus)/sizeof(char*);
	//print ukuran menu
	printf("ukuran menu %d\n", menu_sz);
	c=select();
	printf("%d",c);

	return 0;

}
