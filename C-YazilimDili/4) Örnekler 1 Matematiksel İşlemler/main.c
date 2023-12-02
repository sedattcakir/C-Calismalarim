#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Turkish");

    int kareninBirKenari;
    printf("Karenin Bir Kenarını Giriniz\n");
    scanf("%d", &kareninBirKenari);

    printf("Karenin Alanı: %d cm\n", kareninBirKenari * kareninBirKenari);



    int dikdortgeninUzunKenar, dikdortgeninKisaKenar;
    /*printf("Dikdörtgenin uzun kenarýný giriniz...\n");
    scanf("%d", &dikdortgeninUzunKenar);
    printf("Dikdörtgenin uzun kenarýný giriniz...\n");
    scanf("%d", &dikdortgeninKisaKenar);
*/

    printf("Dikdörtgenin kısa ve uzun kenarını giriniz.\n");
    scanf("%d%d", &dikdortgeninKisaKenar,&dikdortgeninUzunKenar);

    printf("Dikdörtgenin Alanı = %d cm\n", dikdortgeninKisaKenar * dikdortgeninUzunKenar);
    printf("Dikdörtgenin Çevresi =%d cm\n", 2*(dikdortgeninKisaKenar + dikdortgeninUzunKenar));
    printf("Dikdörtgenin çevresinin alanına oranı = %d", 2*(dikdortgeninKisaKenar + dikdortgeninUzunKenar) / dikdortgeninKisaKenar * dikdortgeninUzunKenar);
,





    return 0;
}
