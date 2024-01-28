#include <stdio.h>
#include <stdlib.h>

int main()
{

  int forI, whileI,doWhileI;


  for(forI=1;forI<=10;forI++){
        printf("%d ",forI);
  }

printf("\n");

  whileI=1;

    while(whileI<=10){
        printf("%d ",whileI);
        whileI++;
    }

        printf("\n");

        doWhileI=1;
    do{
        printf("%d ",doWhileI);
        doWhileI++;
    }while(doWhileI<=10);




  return 0;
}
























  /*  int likeSayi;
    double likeYuzde;

    for(int i=1;i<=5;i++){
        printf("%d sanatcinin begenilme sayisi: ",i);
        scanf("%d",&likeSayi);
        likeYuzde=(double)likeSayi/100;
        printf("%d. Sanatcinin begenilme yuzdesi = %0.21f\n",i,likeYuzde);

    }


    int sayac=1;

    while(sayac<=5){
            printf("%d sanatcinin begenilme sayisi: ",sayac);
            scanf("%d",&likeSayi);
            likeYuzde=(double)likeSayi/100;
            printf("%d. Sanatcinin begenilme yuzdesi = %0.21f\n",sayac,likeYuzde);
            sayac++;

        int sayac2=1;

        do{
            printf("%d sanatcinin begenilme sayisi: ",sayac2);
            scanf("%d",&likeSayi);
            likeYuzde=(double)likeSayi/100;
            printf("%d. Sanatcinin begenilme yuzdesi = %0.21f\n",sayac2,likeYuzde);
            sayac2++;
        }while(sayac2<=5);



    } */

