#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*int main()
{
    �rnekler - 1;
    int secim;
    printf("L�tfen se�iminizi yap�n�z:\n");
    printf("1.�lkbahar\n2.Yaz\n3.Sonbahar\n4.K��\n");
    scanf("%d", &secim);

    switch(secim) {

    case 1: printf("Hava mis gibi..."); break;
    case 2: printf("Hava gavur am� gibi yan�yor..."); break;
    case 3: printf("Hava so�umaya ba�lad�..."); break;
    case 4: printf("Hava buz amk..."); break;
    default: printf("L�tfen 1-4 ile aras�nda bir se�im yap�n�z...");
    }
*/
 /*
    �rnekler - 2;
  char karaktereGoreSecim;
  printf("Karakter giriniz:");
  scanf("%c", &karaktereGoreSecim);

  switch(karaktereGoreSecim){

  case 'a': printf("Emre geliyor...\n "); break;
  case 'b': printf("Fato� geliyor...\n"); break;
  case 'c': printf("Melda geliyor...\n"); break;
  case 'd': printf("Sedat geliyor...\n"); break;
  default: printf("L�tfen a,b,c ve d harflerinden birini se�iniz...\n"); break;

  }

 printf("Switch - case i�lemi tamamland�!");

*/
/*
�rnekler - 3;
int ayinNumarasi;
char ayinMevsimi;
    printf("��renmek istedi�iniz ay�n numaras�n� giriniz:\a\n");
    scanf("%d", &ayinNumarasi);
    scanf("%c", &ayinMevsimi);
    switch(ayinNumarasi){

        case 1:
            printf("%d numaral� ay: Ocak\n", ayinNumarasi);
            printf("Ocak ay� %s mevsimine aittir...\n", "KI�");
            ayinMevsimi = 'K';
            break;
        case 2:
            printf("%d numaral� ay: �ubat\n", ayinNumarasi);
            printf("Ocak ay� %s mevsimine aittir...\n", "KI�");
            ayinMevsimi = 'K';
            break;
        case 3:
            printf("%d numaral� ay: Mart\n", ayinNumarasi);
            printf("Mart ay� %s mevsimine aittir...\n", "�LKBAHAR");
            ayinMevsimi = 'I';
            break;
        case 4:
            printf("%d numaral� ay: Nisan\n", ayinNumarasi);
            printf("Nisan ay� %s mevsimine aittir...\n", "�LKBAHAR");
            ayinMevsimi = 'I';
            break;
        case 5:
            printf("%d numaral� ay: May�s\n", ayinNumarasi);
            printf("May�s ay� %s mevsimine aittir...\n", "�LKBAHAR");
           ayinMevsimi = 'I';
           break;
        case 6:
            printf("%d numaral� ay: Haziran\n", ayinNumarasi);
            printf("Haziran ay� %s mevsimine aittir...\n", "YAZ");
            ayinMevsimi = 'Y';
            break;
        case 7:
            printf("%d numaral� ay: Temmuz\n", ayinNumarasi);
            printf("Temmuz ay� %s mevsimine aittir...\n", "YAZ");
            ayinMevsimi = 'Y';
            break;
        case 8:
            printf("%d numaral� ay: A�ustos\n", ayinNumarasi);
            printf("A�ustos ay� %s mevsimine aittir...\n", "YAZ");
            ayinMevsimi = 'Y';
            break;
        case 9:
            printf("%d numaral� ay: Eyl�l\n", ayinNumarasi);
            printf("Eyl�l ay� %s mevsimine aittir...\n", "SONBAHAR");
            ayinMevsimi = 'S';
            break;
        case 10:
            printf("%d numaral� ay: Ekim\n", ayinNumarasi);
            printf("Ekim ay� %s mevsimine aittir...\n", "SONBAHAR");
            ayinMevsimi = 'S';
            break;
        case 11:
            printf("%d numaral� ay: Kas�m\n", ayinNumarasi);
            printf("Kas�m ay� %s mevsimine aittir...\n", "SONBAHAR");
            ayinMevsimi = 'S';
            break;
        case 12:
            printf("%d numaral� ay: Aral�k\n", ayinNumarasi);
            printf("Aral�k ay� %s mevsimine aittir...\n", "KI�");
            ayinMevsimi = 'K';
            break;
        default:
            printf("L�tfen 1-12 aras�nda bir say� giriniz...\n");
            break;
    }

    printf("Switch-Case i�lemi tamamlanm��t�r...\n");

return 0;
}
*/


/*�rnekler - 4

#include <math.h>

int main()
{
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
�rnekler - 5;

  //  Men�
  //  Ba�langu�lar          1            5.5 TL
  //  Ara S�caklar          2            7.5 TL
  //  Salatalar             3            12 TL
  //  Ana Yemekler          4            17.75 TL
  //  Tatl�lar              5            11.25 TL
  //  ��ecekler             6            2.25 TL



     printf("MEN�\t\tS�PAR�� KODU\tF�YAT\n");
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

return 0;
}
*/


















