#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int determine_age(int year)
{
	time_t timer;
	struct tm* tm_info;

	time(&timer);
	tm_info=localtime(&timer);
	int current_y = tm_info->tm_year;
	return 1900+current_y-year;
}

#define SZ 255

int main(void)
{
	char nama[SZ]; // variabel pointer
		       //
	for (;;)
	{
		// nama
		printf("Masukan nama : ");
		fgets(nama,SZ,stdin);
		getchar();
		printf("Halo, %s\n", nama);
		// umur
		int umur;
		int lahir_tahun;
		for(;;)
		{	
			printf("Lahir kamu berapa %s? ",nama);
			scanf("%d",&lahir_tahun);
			//todo; ambil tahun sekarang, kurangin 
			//todo; cek kalau negatif, throw error;
			if (lahir_tahun <= 0)
			{
				printf("Coba lagi\n");
			}
			else if(lahir_tahun <= 1900)
			{
				printf("Hah yakin kamu, %s? Coba lagi\n",nama);
			}
			else
			{
				umur = determine_age(lahir_tahun);
				printf("sudah %d tahun, di tahun %d umur kamu nanti sudah seabad!\n", umur, lahir_tahun+100);
				break;
			}
		}

		if (umur < 18)
		{
			printf("Jangan ya dek ya");
		}
		else if (umur >= 18 && umur < 65)
		{
			printf("Udah mulai dewasa ya kamu, %s",nama);
		}
		else if (umur >=65&&umur<100)
		{
			printf("Dah mulai lucu-lucunya");
		}
		else
		{
			printf("Panjang umur! Selamat umur anda lebih dari seabad!");
		}
		printf("\n");
		// todol ambil tahun sekarang, jumlah dengan sekarang ini
		//
		// todo; tanya selesai atau lagi?
		int done;
		printf("Mau isi form baru lagi? 1. Iya 2. Selesai\n");
		scanf("%d",&done);
		if (done!=1)
		{
			return 0;
		}
		
		//getchar(); //  consume dari buffer/stream per karakter dan mengembalikan numerik dari karakter and dispose -- ga ada left hand operand --
/*
#ifdef _WIN32
		system("cls");
#elif __linux__
		system("clear");
#endif
*/

	}

	return 0;
}
