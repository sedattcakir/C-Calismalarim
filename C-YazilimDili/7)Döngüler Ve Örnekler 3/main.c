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
        printf("L�tfen say� de�erlerinin toplam�n� ��renmek istedi�iniz pozitif say�y� giriniz:\n");
        scanf("%d",&sayi);
        orijinalSayi = sayi;

    if(sayi>=0){
         do{
        sayiDegerleriToplami += sayi%10;
        basamakSayisi++;

        sayi = sayi / 10;


    }while(sayi>0);


    printf("%d %d basamakl�d�r ve say� de�erlerinin toplam�: %d\n",orijinalSayi,basamakSayisi,sayiDegerleriToplami);
    basamakSayisi = 0;
    sayiDegerleriToplami = 0;
    printf("Devam etmek istiyor musunuz? Devam etmek i�in [E\\e] bas�n�z.\n");
    scanf(" %c",&devam);
}
    else{
        printf("L�tfen 0'dan b�y�k bir say� giriniz.\n");
    }
    }

        printf("Program�m�z ba�ar�l� bir �ekilde sonlanm��t�r.\n");






        ...........................................


        int sayi1,sayi2,buyuk,kucuk,kalan;

        do{
            printf("L�tfen EBOB'unu almak istedi�iniz 2 adet say�y� giriniz.\n", sayi1,sayi2);
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
