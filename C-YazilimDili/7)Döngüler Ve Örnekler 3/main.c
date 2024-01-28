#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
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






        ...........................................


        int sayi1,sayi2,buyuk,kucuk,kalan;

        do{
            printf("Lütfen EBOB'unu almak istediðiniz 2 adet sayýyý giriniz.\n", sayi1,sayi2);
            scanf("%d%d",&sayi1,&sayi2);



        }while(sayi1 <= 0 || sayi2 <= 0);

        if (sayi1>sayi2){
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
