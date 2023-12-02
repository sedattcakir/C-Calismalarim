#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define pi 3.14
int main()
{
    setlocale(LC_ALL, "Turkish");

   /* float cemberinYaricapi;

    printf("Çemberin Yarýçapýný Giriniz...\n");
    scanf("%f", &cemberinYaricapi);

    printf("%f\n", pi);
    printf("Çemberin Alaný: %f\n", pi*cemberinYaricapi*cemberinYaricapi);
    printf("Çemberin Çevresi: %f", 2*pi*cemberinYaricapi);

*/
    float kupBirKenar;

    printf("Bana bir küp kenarý söyle sana hacmini ve yanal alanlarý toplamýný söyleyeyim... \n");
    scanf("%f", &kupBirKenar);

    float yanalAlanlarinToplami =  6 * kupBirKenar * kupBirKenar;
    float kupunHacmi = kupBirKenar * kupBirKenar * kupBirKenar;

    printf("Küpün yanal alanlarý toplamý: %.2f\n", yanalAlanlarinToplami);
    printf("Küpün hacmi: %.3f", kupunHacmi);





    return 0;
}
