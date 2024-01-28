#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
.............
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


...............
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

..........
  int sayi,toplam=0;

  printf("Lutfen bir sayi giriniz:\n"),
  scanf("%d",&sayi);


    for(int i=0;i<=sayi;i++){
        toplam +=i;
    }
    printf("0'dan %d ye kadar olan sayilarin toplami: %d\n",sayi,toplam);

*/


