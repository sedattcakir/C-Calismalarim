/*
#include <stdio.h>
#include <locale.h>

// \n komutu bir sonraki yazilan sistemi alt tarafina gecmesini saglar.
// #include <locale.h> ve setlocale(LC_ALL, "Turkish"); yazilimin istedigimiz dilde olmasini saglar.


int main() {

setlocale(LC_ALL, "Turkish");

int sayi;

printf("sedat\n");

printf("Lütfen yaþýnýzý giriniz\n");
scanf("%d", &sayi);

printf(" Doðum tarihiniz %d", 2022-sayi);




return 0;


}

*/


#include <stdio.h>
#include <locale.h>



int main() {


setlocale(LC_ALL, "Turkish");

int sayi;

printf("sedat\n");
printf("Lütfen yaşınızı giriniz.\n");
scanf("%d", &sayi);
printf("Doğum tarihiniz %d", 2022-sayi);






return 0;



}
i
