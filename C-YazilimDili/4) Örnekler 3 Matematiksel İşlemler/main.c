#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{

 setlocale(LC_ALL, "Turkish");

/*
 float a,b,c,x;

    printf("Sýrasýyla a,b,c ve x deðerlerini giriniz. \a\n");
    scanf("%f%f%f%f", &a,&b,&c,&x);
    float sonuc = a*x*x + b*x + c;
    printf("Denklemin sonucu: %d",(int)sonuc);



*/

// int -> float -> double

int x = 30;
float y = 30;
double z = 30;


printf("%f\n", x/y);
printf("%f", y/z);









    return 0;
}
