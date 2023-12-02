#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
  setlocale(LC_ALL, "Turkish");


    int sayi,onbinler,binler,yuzler,onlar,birler;


    printf("5 basamaklý bir sayý giriniz...\a\n");
    scanf("%d", &sayi);

    onbinler = sayi / 10000;
    binler = (sayi % 10000) / 1000;
    yuzler = (sayi % 1000) / 100;
    onlar = (sayi % 100) / 10;
    birler = (sayi % 10);


    printf("Sayýnýn onbinler basamaðýnýn sayý deðeri: %d\n",onbinler);
    printf("Sayýnýn binler basamaðýnýn sayý deðeri: %d\n",binler);
    printf("Sayýnýn yüzler basamaðýnýn sayý deðeri: %d\n",yuzler);
    printf("Sayýnýn onlar basamaðýnýn sayý deðeri: %d\n",onlar);
    printf("Sayýnýn binler basamaðýnýn sayý deðeri: %d\n",birler);



    printf("%d     %d     %d     %d     %d   \n",onbinler,binler,yuzler,onlar,birler);







    return 0;
}
