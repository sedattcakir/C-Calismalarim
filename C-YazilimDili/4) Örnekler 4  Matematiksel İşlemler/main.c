#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
  setlocale(LC_ALL, "Turkish");


    int sayi,onbinler,binler,yuzler,onlar,birler;


    printf("5 basamakl� bir say� giriniz...\a\n");
    scanf("%d", &sayi);

    onbinler = sayi / 10000;
    binler = (sayi % 10000) / 1000;
    yuzler = (sayi % 1000) / 100;
    onlar = (sayi % 100) / 10;
    birler = (sayi % 10);


    printf("Say�n�n onbinler basama��n�n say� de�eri: %d\n",onbinler);
    printf("Say�n�n binler basama��n�n say� de�eri: %d\n",binler);
    printf("Say�n�n y�zler basama��n�n say� de�eri: %d\n",yuzler);
    printf("Say�n�n onlar basama��n�n say� de�eri: %d\n",onlar);
    printf("Say�n�n binler basama��n�n say� de�eri: %d\n",birler);



    printf("%d     %d     %d     %d     %d   \n",onbinler,binler,yuzler,onlar,birler);







    return 0;
}
