#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define pi 3.14
int main()
{
    setlocale(LC_ALL, "Turkish");

   /* float cemberinYaricapi;

    printf("�emberin Yar��ap�n� Giriniz...\n");
    scanf("%f", &cemberinYaricapi);

    printf("%f\n", pi);
    printf("�emberin Alan�: %f\n", pi*cemberinYaricapi*cemberinYaricapi);
    printf("�emberin �evresi: %f", 2*pi*cemberinYaricapi);

*/
    float kupBirKenar;

    printf("Bana bir k�p kenar� s�yle sana hacmini ve yanal alanlar� toplam�n� s�yleyeyim... \n");
    scanf("%f", &kupBirKenar);

    float yanalAlanlarinToplami =  6 * kupBirKenar * kupBirKenar;
    float kupunHacmi = kupBirKenar * kupBirKenar * kupBirKenar;

    printf("K�p�n yanal alanlar� toplam�: %.2f\n", yanalAlanlarinToplami);
    printf("K�p�n hacmi: %.3f", kupunHacmi);





    return 0;
}
