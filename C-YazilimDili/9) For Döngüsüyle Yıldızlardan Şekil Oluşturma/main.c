#include <stdio.h>
#include <stdlib.h>

int main()
{

    int sayi,satir,sutun;

    printf("Lutfen bir sayi giriniz:");
    scanf("%d",&sayi);

    for(satir=1;satir<=sayi;satir++){
        for(sutun=1;sutun<=satir;sutun++){
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    for(satir=1;satir<=sayi;satir++){
        for(sutun=sayi-satir;sutun>=0;sutun--){
            printf("*");
        }
        printf("\n");

    }



    return 0;
}
