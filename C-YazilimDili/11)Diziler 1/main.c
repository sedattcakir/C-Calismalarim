#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=15;
    int j=28;

    int sayilar[] = {15,28};

    printf("%d\n",sayilar[0]);
    printf("%d\n",sayilar[1]);
    int sayilar[] = {3,6,9,12,15};
    for(int i=0;i<5;i++){
        printf("Sayilar isimli dizinin %d. elemani = %d\n",i+1,sayilar[i]);
    }

   float sayilar[] = {1.2,2.9,2.8,1.5};

    for(int i=0;i<4;i++){
        printf("%.1f\n",sayilar[i]);
    }







    int i;
    float sayilar[7]={};

    for(i=0;i<7;i++){
        printf("%d. elemanini giriniz.\n",i+1);
        scanf("%f",&sayilar[i]);
    }

    for(i=0;i<7;i++){
        printf("%f\n",sayilar[i]);
    }



    return 0;
}
