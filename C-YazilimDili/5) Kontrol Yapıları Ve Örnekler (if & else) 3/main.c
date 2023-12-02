#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Turkish");
/*
0-100 adet   -> adet fiyatı = 3 TL
100-200 adet -> adet fiyatı = 2.5 TL
200-300 adet -> adet fiyatı = 2 TL
300-400 adet -> adet fiyatı = 1.25 TL
400-000 adet -> adet fiyatı = 0.75 TL
*/

/*int adet;
float adetFiyati;
    printf("Kaç adet ürün alacaksınız? \n");
    scanf("%d", &adet);

    if( adet>=400 ) {
        adetFiyati = 0.75;

}
    else if ( adet>=300 && adet<400) {
        adetFiyati = 1.25;
}
    else if ( adet>=200 && adet<300) {
        adetFiyati = 2;
    }
    else if ( adet>=100 && adet<200) {
        adetFiyati = 2.5;
    }
    else if ( adet>0 && adet<100){
        adetFiyati = 3;
}

    else {
        printf("Lütfen 0'dan büyük bir sayı giriniz...\n");
    }

     printf("Toplam ödenecek fiyat: %.3   f", adet*adetFiyati);
    return 0;
}
*/
