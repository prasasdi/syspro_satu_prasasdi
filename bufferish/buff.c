#include <stdio.h>

#define KB 1024

int main(void)
{
	// todo; tangkap buffer dari stdin/terminal
	// todo; susur "string" / char
	// todo; cek dalam susur tersebut selain numerik 0 - 9
	
	char saus[10];

	//char* current = *saus; // point ke "awal index"
	// contoh input; a200 <- error input di charpos 1 (X)
	
	scanf("%[^\n]s",saus);
	printf("Print numerik dari karakter\n");
	for (int i = 0; i < KB; i++)
	{
		/*
		if (saus[i] == 0)
		{
			break;
		}
		*/
		printf("%d ", saus[i]);
		
	}

	//int a = saus[0]-'0';
	printf("\n");
	printf("done, awal char %d \n", saus[0]);
	//printf("numerik %d",a);

	return 0;
}
