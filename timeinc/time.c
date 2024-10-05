#include <stdio.h>
#include <time.h>

int main(void)
{
	time_t timer;
	struct tm* tm_inf;
	char y[5];

	time(&timer);
	tm_inf=localtime(&timer);
	printf("%d",1900 + tm_inf->tm_year);
	strftime(y,5,"%Y",tm_inf);

	printf("%s",&y);
	return 0;
}
