#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#include <time.h>

#define MAX_CHAR 128
#define ON  1
#define OFF 0
#define BLANKLINE (printf("\n"))

// make struct Person
typedef struct {
    char nama[MAX_CHAR];
    int umur;
} Person;

void printUmur(int umur) {
    // untuk mengetahui year hari ini https://question.onlinegdb.com/7448/how-to-get-current-year-in-c-onlinegdb
    time_t seconds = time(NULL);
    struct tm* currentTime = localtime(&seconds);
    int currentYear = (currentTime->tm_year + 1900);
    if (umur >= 100) {
        printf("Umur anda sekarang %d", umur);
        BLANKLINE;
        printf("Anda kelahiran tahun %d", (2024 - umur));
        BLANKLINE;
    } else {
        printf("Umur anda sekarang %d", umur);
        BLANKLINE;
    }
}

void Output(Person *person){
    // untuk nama
    printf("nama anda adalah :%s",person->nama);
    BLANKLINE;
    // untuk umur 
    printUmur(person->umur);
    BLANKLINE;
}
int main(void) {
    // Input nama
    Person person1;
    int pilihan;
    while (ON){
        printf("Selamat datang di app sederhana ini.\n");
        printf("Masukan nama anda: ");
        fgets(person1.nama,MAX_CHAR,stdin);
        // Input umur
        printf("Masukan umur anda: ");
        scanf("%d", &person1.umur);
        #ifdef _WIN32
            system("cls");
        #elif __linux__ 
            system("clear");
        // menghapus output yang ada
        #endif
        // Cetak umur dan kelahiran
        Output(&person1);
        // check kalau mau input lagi
        printf("apakah kamu mau lanjut apa stop? (1 untuk lanjut, 0 untuk stop):");
        scanf("%d",&pilihan);
        getchar();
        if(pilihan==0){
            printf("Terima kasih, sampai jumpa lagi!\n");
            break;
        }

        #ifdef _WIN32
            system("cls");
        #elif __linux__ 
            system("clear");
        // menghapus output yang ada
        #endif
    }
    

   return 0;
}
