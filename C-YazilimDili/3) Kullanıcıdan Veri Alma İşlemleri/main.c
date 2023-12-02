#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Turkish");

    int sayi;
    float kesirliSayi;
    double kesirliSayi2;
    char karakter;
    char karakterDizisi[5];


    printf("Lutfen bir integer deger giriniz...\n");
    scanf("%d", &sayi);
    printf("Lutfen bir float deger giriniz...\n");
    scanf("%f", &kesirliSayi);
    printf("Lutfen bir double deger giriniz...\n");
    scanf("%lf", &kesirliSayi2);
    printf("Lutfen bir karakter giriniz...\n");
    scanf(" %c", &karakter);
    printf("Lutfen bir karakter dizisi giriniz...\n");
    scanf("%s", &karakterDizisi);


    printf("Girdiginiz Sayi:  %d\n", sayi);
    printf("Girdiginiz Sayi:  %f\n", kesirliSayi);
    printf("Girdiginiz Sayi:  %f\n", kesirliSayi2);
    printf("Girdiginiz Sayi:  %c\n", karakter);
    printf("Girdiginiz Sayi:  %s\n", karakterDizisi);













    return 0;
}
