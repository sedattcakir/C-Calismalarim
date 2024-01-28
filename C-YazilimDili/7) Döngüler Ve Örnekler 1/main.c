#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
Örnekler - 1;

int main()
{
  int i=0;

   // 0 -> false
   // 0 disindakiler -> true

   Ard arda bir şeyi yazmak için while döngüsünü kullanırız.
   while(i<10){
        printf("%d)Kafasizlar dernegi acildi!!!\n", i+1);
        i++;
   }

Örnekler - 2;

    karesini alabilmek için alternatif olarak düşünebileceğimiz bir döngüdür while.
    int i=1;

    while(i<11){
    printf("%d karesi = %d\n", i, i*i);

    i++;
}

Örnekler - 3;

    Çarpım tablosunu yaparken while döngüsünü kullanabiliriz.
int i=1;

    while(i<11){
    printf(" 1 * %d = %d\t", i, 1*i);
    printf(" 2 * %d = %d\t", i, 2*i);
    printf(" 3 * %d = %d\t", i, 3*i);
    printf(" 4 * %d = %d\t", i, 4*i);
    printf(" 5 * %d = %d\t", i, 5*i);
    printf(" 6 * %d = %d\t", i, 6*i);
    printf(" 7 * %d = %d\t", i, 7*i);
    printf(" 8 * %d = %d\t", i, 8*i);
    printf(" 9 * %d = %d\t", i, 9*i);
    printf(" 10 * %d = %d\t", i, 10*i);
    printf("\n");
    i++;
}

Örnekler - 4;
    1'den girilen sayiya kadar olan sayiların toplamını alabilmek için while döngüsünü kullanırız.
int sayi=0;
int x=1;
int toplam = 0;
    printf("Lütfen kaça kadar bastýrmak istediðinizi girin:");
    scanf("%d", &sayi);

    int kullanicininGirdigiSayi = sayi;
    while(sayi>0){
        printf("%d\n", x);
        toplam = toplam + x;
        x++;
        sayi--;
}
printf("1'den %d ye kadar olan sayýlarýn toplamý = %d\n",kullanicininGirdigiSayi,toplam);




  Örnekler - 5;

    İki sayı arasındaki sayıların toplamını veren kodu yazabilmek için if else döngüsünden yardım alırız.
    int sayi1,sayi2,toplam = 0;

    printf("Kaç ile kaç arasýndaki sayýlarý toplayayým?\nLütfen 2 sayý seçiniz:");
    scanf("%d%d", &sayi1,&sayi2);

    int terimSayisi = abs(sayi1-sayi2)+1;
    int buyuk,kucuk;


    if(sayi2>sayi1){
        buyuk = sayi2;
        kucuk = sayi1;
        while(terimSayisi>0){
            printf("%d\n",sayi1);
            toplam = toplam + sayi1;
            sayi1++;
            terimSayisi--;
}
}
    else if(sayi2<sayi1){
            buyuk = sayi1;
            kucuk = sayi2;
        while(terimSayisi>0){
            printf("%d\n",sayi2);
            toplam = toplam + sayi2;
            sayi2++;
            terimSayisi--;
}
}

    printf("%d den %d ye kadar olan sayýlarýn toplamý = %d",kucuk,buyuk,toplam);


Örnekler - 6;

        Faktöriyel sonucu için if else dongüsünden yardım alırız.

int sayi;
int faktoriyelSonuc=1;
    printf("Faktöriyelini almak istediðiniz sayýyý giriniz:");
    scanf("%d",&sayi);

    int kullanicininGirdigiSayi = sayi;

    if(sayi>=0){
         while(sayi>=0){
        if(sayi==0){
            faktoriyelSonuc *= 1;
        }
        else{
            faktoriyelSonuc *= sayi;
        }
        sayi--;
    }

    printf("%d! = %d",kullanicininGirdigiSayi,faktoriyelSonuc);
    }
     else{
        printf("Lütfen doðal sayý giriniz!!!");
     }



    return 0;
}

Örnekler - 7;*/

int main()
{
    int i=10;
    while(i<10){
        printf("While %d\n",i);
        i++;
   }
        printf("\n");

        int a=10;

        do{
            printf("Do-While\n",a);
            a++;
            }while(a<10);
              return 0;
}


    Örnekler - 8;

    float sayi;
    char devam;
    float buyuk = 0;

    do{
        printf("Lütfen bir sayý giriniz:");
        scanf("%f",&sayi);

    if(sayi>buyuk){
        buyuk = sayi;
        printf("Yeni büyük sayýmýz %f\n",buyuk);
    }
    else {
        printf("Büyük sayý deðiþmedi. Büyük sayýmýz halen %f\n",buyuk);
    }


    printf("Büyük sayýyý hesaplamaya devam etmek istiyor musunuz?\n");
    scanf(" %c",&devam);


    }while(   devam == 'E' || devam == 'e'   );

    return 0;
}


Örnekler - 9;

int main()
{
    int sayi;
    int basamakSayisi = 0;
    int sayiDegerleriToplami = 0;

    int orijinalSayi;
    char devam='E';

    while(devam== 'E' || devam== 'e'){
        printf("Lütfen sayý deðerlerinin toplamýný öðrenmek istediðiniz pozitif sayýyý giriniz:\n");
        scanf("%d",&sayi);
        orijinalSayi = sayi;

    if(sayi>=0){
         do{
        sayiDegerleriToplami += sayi%10;
        basamakSayisi++;

        sayi = sayi / 10;


    }while(sayi>0);


    printf("%d %d basamaklýdýr ve sayý deðerlerinin toplamý: %d\n",orijinalSayi,basamakSayisi,sayiDegerleriToplami);
    basamakSayisi = 0;
    sayiDegerleriToplami = 0;
    printf("Devam etmek istiyor musunuz? Devam etmek için [E\\e] basýnýz.\n");
    scanf(" %c",&devam);
}
    else{
        printf("Lütfen 0'dan büyük bir sayý giriniz.\n");
    }
    }

        printf("Programýmýz baþarýlý bir þekilde sonlanmýþtýr.\n");
        return 0;
}


Örnekler - 10;

int sayi1,sayi2,buyuk,kucuk,kalan;

do{
    printf("Lütfen EBOB'unu almak istediðiniz 2 adet sayýyý giriniz.\n", sayi1,sayi2);
    scanf("%d%d",&sayi1,&sayi2);

}while(sayi1 <= 0 || sayi2 <= 0);

if sayi1>sayi2){
    buyuk = sayi1;
    kucuk = sayi2;
}

else{
    buyuk = sayi2;
    kucuk = sayi1;
}
    kalan = buyuk % kucuk;

while(kalan != 0) {

    buyuk = kucuk;
    kucuk = kalan;
    kalan = buyuk % kucuk;
}

        printf("EBOB (%d,%d): %d",sayi1,sayi2,kucuk);
    return 0;
}

Örnekler - 11;

int main()
{

    setlocale(LC_ALL, "Turkish" );

    int biletSayisi = 100;
    char biletAl;


    for( ; biletSayisi>0;){
        printf("Bilet almak ister misiniz [E/e] ?\n");
        scanf(" %c",&biletAl);

        if( biletAl == 'e' || biletAl == 'E'){
            int alinanBiletSayisi;
            printf("Kaç tane bilet almak istiyorsunuz?:\n");
            scanf("%d",&alinanBiletSayisi);

            if(alinanBiletSayisi<=biletSayisi){
                biletSayisi -= alinanBiletSayisi;
            }
            else{
                printf("Lütfen alinabilecek toplam bilet sayisina gore bilet aliniz...\a\n");
            }

            //biletSayisi--;
            printf("Alinabilecek bilet sayisi: %d\n",biletSayisi);
        }
            else {
                break;
            }
    }

    if(biletSayisi==0){
        printf("Biletler tukendi...\n");
    }

    printf("Alinan bilet sayisi: %d\nKalan bilet sayisi:%d\n",100-biletSayisi,biletSayisi);


    return 0;
}

    Örnekler - 12;

    int sayi;

    printf("Lütfen bir sayi giriniz:\n");
    scanf("%d",&sayi);
    printf("Girdiginiz sayi ile 0 arasýnda 5'e bolunen sayilari gosterelim.\n");

    if(sayi>=0){

        for(int i=0;i<sayi;i+=5){
                printf("%d\n",i);
        }
    }
    else {
        for(int i=0;i>sayi;i-=5){
                printf("%d\n",i);
        }
    }

    Örnekler - 13;

    int sayi,toplam=0;
    printf("Lutfen bir sayi giriniz:\n"),
    scanf("%d",&sayi);

    for(int i=0;i<=sayi;i++){
        toplam +=i;
}
        printf("0'dan %d ye kadar olan sayilarin toplami: %d\n",sayi,toplam


