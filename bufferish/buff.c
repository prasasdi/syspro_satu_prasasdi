#include <stdio.h>

#define BUFFER_SIZE 1024

int main(void)
{
	// todo; tangkap buffer dari stdin/terminal
	// todo; susur "string" / char
	// todo; cek dalam susur tersebut selain numerik 0 - 9
	
	char* saus[BUFFER_SIZE];

	//char* current = *saus; // point ke "awal index"
	// contoh input; a200 <- error input di charpos 1 (X)
	
	scanf("%s",saus);
	for (int i = 0; i < BUFFER_SIZE; i++)
	{
		break;
	}

	printf("done, awal char %c\n", saus[0]);

	if (saus[0] >= '0' && saus[0] <= '9')
	{
		printf("numerik");
	}
	else
	{
		printf("non-numerik");
	}
	return 0;
}
