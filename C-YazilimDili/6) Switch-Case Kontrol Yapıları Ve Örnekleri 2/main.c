/*#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//#include <math.h>

int main()
{
    setlocale(LC_ALL, "Turkish");


   int secim;
    float sayi1,sayi2;

menu:   printf("L�tfen yapmak istedi�iniz i�lemi se�iniz:\n");
        printf("1.Toplamaa\n2.��karma\n3.�arpma\n4.B�lme\n5.Karek�k\n6.Kuvvet\n");
        printf("L�tfen sistemden ��ki� yapmak i�in '0' rakam�na bas�n�z!\n");

        scanf("%d", &secim);

    if ( secim == 0){
        goto cikis;
    }
    if (secim>0 && secim<7) {

        printf("L�tfen i�lem yapmak istedi�iniz iki say�y� giriniz:\n");
        scanf("%f%f", &sayi1,&sayi2);
    }

    switch(secim){

    case 1:

        printf("Toplam= %f\n", sayi1+sayi2);
        break;

    case 2:
        printf("��karma= %f\n", sayi1-sayi2);
        break;

    case 3:
        printf("�arpma= %f\n", sayi1*sayi2);
        break;

    case 4:
        printf("B�lme= %f\n", sayi1/sayi2);
        break;

    case 5 :
        printf("Karek�k %f = %f\nKarek�k %f = %f\n", sayi1,sqrt(sayi1), sayi2,sqrt(sayi2));
        break;

    case 6:
        printf("%f �zeri %f =%f\n", sayi1,sayi2, pow(sayi1,sayi2));
        break;


    default:
        printf("L�tfen i�lem se�imizi 1-6 aras�nda bir rakam giriniz!\n");
        break;

    }
         goto menu;
         cikis: printf("Hesaplama i�leminiz son bulmu�tur. Allah bir daha kullanmay� gerektirmesin!!!\n");

*/

       /*

       Men�
    Ba�langu�lar          1            5.5 TL
    Ara S�caklar          2            7.5 TL
    Salatalar             3            12 TL
    Ana Yemekler          4            17.75 TL
    Tatl�lar              5            11.25 TL
    ��ecekler             6            2.25 TL */



/*      printf("MEN�\t\tS�PAR�� KODU\tF�YAT\n");
      printf("Ba�lang��lar\t\t1\t5.5 TL\n");
      printf("Ara S�caklar\t\t2\t7.5 TL\n");
      printf("Salatalar\t\t3\t12 TL\n");
      printf("Ana Yemekler\t\t4\t17.75 TL\n");
      printf("Tatl�lar\t\t5\t11.25 TL\n");
      printf("��ecekler\t\t6\t2.25 TL\n");

int siparisNumarasi;
float toplam,porsiyon;
menu:   printf("L�tfen yemek istedi�iniz yemek kodunu giriniz!\n");
        scanf("%d", &siparisNumarasi);

   if(siparisNumarasi== -1){
    goto cikis;
   }

   if(siparisNumarasi>0 && siparisNumarasi<7){
    printf("L�tfen ka� porsiyon istedi�inizi s�yleyiniz!!!\n");
    scanf("%f",&porsiyon);

   }
    switch(siparisNumarasi){

    case 1:
        if(porsiyon>0){
        toplam += porsiyon * 5.5;
        printf("Toplam Tutar: %f\n",toplam);
        }
        else{
        printf("L�tfen 0 harici bir do�al say� giriniz!!!\n");
        }
        break;
    case 2:
        if(porsiyon>0){
        toplam += porsiyon * 7.5;
        printf("Toplam Tutar: %f\n",toplam);
       }
        else{
        printf("L�tfen 0 harici bir do�al say� giriniz!!!\n");
        }
        break;
    case 3:
        if(porsiyon>0){
        toplam += porsiyon * 12;
        printf("Toplam Tutar: %f\n",toplam);
        }
        else{
        printf("L�tfen 0 harici bir do�al say� giriniz!!!\n");
        }
        break;
    case 4:
        if(porsiyon>0){
        toplam += porsiyon * 17.75;
        printf("Toplam Tutar: %f\n",toplam);
        }
        else{
        printf("L�tfen 0 harici bir do�al say� giriniz!!!\n");
        }
        break;
    case 5:
        if(porsiyon>0) {
        toplam += porsiyon * 11.25;
        printf("Toplam Tutar: %f\n",toplam);
        }
        else{
        printf("L�tfen 0 harici bir do�al say� giriniz!!!\n");
        }
        break;

    case 6:
        if(porsiyon>0){
        toplam += porsiyon * 2.25;
        printf("Toplam Tutar: %f\n",toplam);
    }
        else{
        printf("L�tfen 0 harici bir do�al say� giriniz!!!\n");
        }
        break;

    default:
        printf("L�tfen se�iminizi yaparken 1-6 aras�ndaki rakamlar� se�iniz!!!\a\n");
        break;
    }

    goto menu;
    cikis:  printf("Men� se�iminiz bitmi�tir bizi se�ti�iniz i�in te�ekk�rler tekrardan bekleriz...\a\n");
            printf("Toplam Tutar: %f",toplam);

*/

 /*            return 0;
}
*/
