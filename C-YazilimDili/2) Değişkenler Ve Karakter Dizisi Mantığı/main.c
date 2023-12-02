#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "Turkish");

    int tamSayi = 6;  // 4 byte
    double buyukYerKaplayanKesirliSayi = 7.2; // 8 byte
  //short int uzunluk; // 2 byte
  //long int uzunluk2; // 4 byte
    char Karakter = 'S'; // 1 byte
    char KarakterDizisi[12] = "Sedat Enes"; // 10 byte
    float kesirliSayi = 9.2;  // 4 byte

    printf("%d RAM'de %d byte kadar yer kaplar \n", tamSayi, sizeof(int));
    printf("%.2f RAM'de %d byte kadar yer kaplar\n", buyukYerKaplayanKesirliSayi, sizeof(double));
    printf("%c RAM'de %d byte kadar yer kaplar\n", Karakter, sizeof(char));
    printf("%s RAM'de %d byte kadar yer kaplar\n", KarakterDizisi);
    printf("%.2f RAM'de %d byte kadar yer kaplar\n", kesirliSayi, sizeof(float));



    return 0;
}
