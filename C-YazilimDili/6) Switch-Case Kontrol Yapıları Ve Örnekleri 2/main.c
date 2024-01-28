/*#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//#include <math.h>

int main()
{
    setlocale(LC_ALL, "Turkish");


   int secim;
    float sayi1,sayi2;

menu:   printf("Lütfen yapmak istediðiniz iþlemi seçiniz:\n");
        printf("1.Toplamaa\n2.Çýkarma\n3.Çarpma\n4.Bölme\n5.Karekök\n6.Kuvvet\n");
        printf("Lütfen sistemden çýkiþ yapmak için '0' rakamýna basýnýz!\n");

        scanf("%d", &secim);

    if ( secim == 0){
        goto cikis;
    }
    if (secim>0 && secim<7) {

        printf("Lütfen iþlem yapmak istediðiniz iki sayýyý giriniz:\n");
        scanf("%f%f", &sayi1,&sayi2);
    }

    switch(secim){

    case 1:

        printf("Toplam= %f\n", sayi1+sayi2);
        break;

    case 2:
        printf("Çýkarma= %f\n", sayi1-sayi2);
        break;

    case 3:
        printf("Çarpma= %f\n", sayi1*sayi2);
        break;

    case 4:
        printf("Bölme= %f\n", sayi1/sayi2);
        break;

    case 5 :
        printf("Karekök %f = %f\nKarekök %f = %f\n", sayi1,sqrt(sayi1), sayi2,sqrt(sayi2));
        break;

    case 6:
        printf("%f üzeri %f =%f\n", sayi1,sayi2, pow(sayi1,sayi2));
        break;


    default:
        printf("Lütfen iþlem seçimizi 1-6 arasýnda bir rakam giriniz!\n");
        break;

    }
         goto menu;
         cikis: printf("Hesaplama iþleminiz son bulmuþtur. Allah bir daha kullanmayý gerektirmesin!!!\n");

*/

       /*

       Menü
    Baþlanguçlar          1            5.5 TL
    Ara Sýcaklar          2            7.5 TL
    Salatalar             3            12 TL
    Ana Yemekler          4            17.75 TL
    Tatlýlar              5            11.25 TL
    Ýçecekler             6            2.25 TL */



/*      printf("MENÜ\t\tSÝPARÝÞ KODU\tFÝYAT\n");
      printf("Baþlangýçlar\t\t1\t5.5 TL\n");
      printf("Ara Sýcaklar\t\t2\t7.5 TL\n");
      printf("Salatalar\t\t3\t12 TL\n");
      printf("Ana Yemekler\t\t4\t17.75 TL\n");
      printf("Tatlýlar\t\t5\t11.25 TL\n");
      printf("Ýçecekler\t\t6\t2.25 TL\n");

int siparisNumarasi;
float toplam,porsiyon;
menu:   printf("Lütfen yemek istediðiniz yemek kodunu giriniz!\n");
        scanf("%d", &siparisNumarasi);

   if(siparisNumarasi== -1){
    goto cikis;
   }

   if(siparisNumarasi>0 && siparisNumarasi<7){
    printf("Lütfen kaç porsiyon istediðinizi söyleyiniz!!!\n");
    scanf("%f",&porsiyon);

   }
    switch(siparisNumarasi){

    case 1:
        if(porsiyon>0){
        toplam += porsiyon * 5.5;
        printf("Toplam Tutar: %f\n",toplam);
        }
        else{
        printf("Lütfen 0 harici bir doðal sayý giriniz!!!\n");
        }
        break;
    case 2:
        if(porsiyon>0){
        toplam += porsiyon * 7.5;
        printf("Toplam Tutar: %f\n",toplam);
       }
        else{
        printf("Lütfen 0 harici bir doðal sayý giriniz!!!\n");
        }
        break;
    case 3:
        if(porsiyon>0){
        toplam += porsiyon * 12;
        printf("Toplam Tutar: %f\n",toplam);
        }
        else{
        printf("Lütfen 0 harici bir doðal sayý giriniz!!!\n");
        }
        break;
    case 4:
        if(porsiyon>0){
        toplam += porsiyon * 17.75;
        printf("Toplam Tutar: %f\n",toplam);
        }
        else{
        printf("Lütfen 0 harici bir doðal sayý giriniz!!!\n");
        }
        break;
    case 5:
        if(porsiyon>0) {
        toplam += porsiyon * 11.25;
        printf("Toplam Tutar: %f\n",toplam);
        }
        else{
        printf("Lütfen 0 harici bir doðal sayý giriniz!!!\n");
        }
        break;

    case 6:
        if(porsiyon>0){
        toplam += porsiyon * 2.25;
        printf("Toplam Tutar: %f\n",toplam);
    }
        else{
        printf("Lütfen 0 harici bir doðal sayý giriniz!!!\n");
        }
        break;

    default:
        printf("Lütfen seçiminizi yaparken 1-6 arasýndaki rakamlarý seçiniz!!!\a\n");
        break;
    }

    goto menu;
    cikis:  printf("Menü seçiminiz bitmiþtir bizi seçtiðiniz için teþekkürler tekrardan bekleriz...\a\n");
            printf("Toplam Tutar: %f",toplam);

*/

 /*            return 0;
}
*/
