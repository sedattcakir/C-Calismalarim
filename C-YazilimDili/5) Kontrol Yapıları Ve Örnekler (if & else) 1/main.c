#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
�rnekler - 1;
int main()
{
    setlocale(LC_ALL, "Turkish");
    int yas;

    printf("L�tfen yasinizi giriniz:\a");
    scanf("%d",&yas);

    if( yas >= 18 ) {
        printf("Resitsiniz...\n");
    }

    else{
        printf("Resit degilsiniz...\n");
    }
*/

/*
�rnekler - 2;
int main()
{
    int puan;

    printf("L�tfen puaninizi giriniz:\a");
    scanf("%d",&puan);


   if ( puan > 0 ){
        printf("Sayi Pozitiftir...");
   }

   else if ( puan == 0) {
        printf("Sayi n�trd�r...");
   }
   else  {
        printf("Sayi Negatiftir");
}
     80-100 -> �ok iyi puan
       60-80 -> iyi puan
       40-60 -> Orta Puan
       20-40 -> K�t� Puan
       0 -20 -> �ok k�t� puan


    if( puan >= 80 && puan <= 100) {
        printf("�ok iyi puan...");
    }

    else if ( puan >= 60 && puan < 80){
        printf("iyi puan...");
}
    else if ( puan >= 40 && puan < 60){
        printf("Orta Puan...");
    }
    else if ( puan >= 20 && puan < 40){
        printf("K�t� Puan...");
}

    else if ( puan >= 0 && puan < 20){
        printf("�ok k�t� puan...");
}
    else
        printf("Ge�erli puan giriniz...");

    return 0;
}
*/

/*
�rnekler - 3;

int main()
{
    /*int sayi;

    printf("Lutfen sayi giriniz:");
    scanf("%d", &sayi);

    if ( sayi % 10 == 10) {
        printf("%d: 10'a bolunuyor...\n", sayi);
}
    else {
        printf("%d: 10'a bolunmuyor...\n", sayi);
}
*/

/*
�rnekler - 4;
char cinsiyet;
float boy;
    printf("Lutfen cinsiyetinizi giriniz. \n");
    scanf("%c", &cinsiyet);

     printf("Lutfen boyunuzu cm cinsinden giriniz. \n");
     scanf("%f", &boy);



    if ((cinsiyet == 'E' || cinsiyet == 'e' )&& boy > 160) {
        printf("Tebrikler mulakati gectiniz...\n");
}

    else if ((cinsiyet == 'K' || cinsiyet == 'k') && boy > 150) {
        printf("Tebrikler mulakati gectiniz...\n");
}
   else {
        printf("Maalesef elendiniz...");
   }
*/
   /*
    if (cinsiyet == 'E' || cinsiyet == 'e') {
        printf("Siz yavsaksiniz...\n");
}

    else if (cinsiyet == 'K' || cinsiyet == 'k') {
        printf("Siz en ustun varliksiniz...\n");
}
    else
        printf("L�tfen E veya K harflerini giriniz.");



return 0;
}
*/


/*
�rnekler - 5;
int main()
{
    setlocale(LC_ALL, "Turkish");

//  0-100 adet   -> adet fiyat� = 3 TL
//100-200 adet   -> adet fiyat� = 2.5 TL
//200-300 adet   -> adet fiyat� = 2 TL
//300-400 adet   -> adet fiyat� = 1.25 TL
//400-000 adet   -> adet fiyat� = 0.75 TL


int adet;
float adetFiyati;
    printf("Ka� adet �r�n alacaks�n�z? \n");
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
        printf("L�tfen 0'dan b�y�k bir say� giriniz...\n");
    }

     printf("Toplam �denecek fiyat: %.3   f", adet*adetFiyati);
    return 0;
}
*/





















