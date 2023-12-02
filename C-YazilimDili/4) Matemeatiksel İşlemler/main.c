#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*char isminBasHarfi[] = "Sedat Enes Cakir"  ;

    //printf("Bir karakter giriniz\n");
    //scanf("%c",&isminBasHarfi);

    printf("%s",isminBasHarfi);
    */

/*int main()
{

    setlocale(LC_ALL, "Turkish");
    int sayi1;

    sayi1 = 36;

    //Toplama: sayi1++,   sayi1 = sayi + 1,   sayi1 += 1
    //Çýkarma: sayi1--,   sayi1 = sayi - 1,   sayi1 -= 1
    //Çarpma:             sayi1 = sayi * 1,   sayi1 *= 1
    //Bölme:              sayi1 = sayi / 1,   sayi1 /= 1
    // Mod Alma:          sayi1 = sayi % 6,   sayi1 %= 6




    /*sayi1 = sayi1 % 5;
    sayi1 %= 5;


    printf("%d",sayi1);




    return 0;
}
*/
/*
Örnekler - 1;
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


    printf("Dikdörtgenin kısa ve uzun kenarını giriniz.\n");
    scanf("%d%d", &dikdortgeninKisaKenar,&dikdortgeninUzunKenar);

    printf("Dikdörtgenin Alanı = %d cm\n", dikdortgeninKisaKenar * dikdortgeninUzunKenar);
    printf("Dikdörtgenin Çevresi =%d cm\n", 2*(dikdortgeninKisaKenar + dikdortgeninUzunKenar));
    printf("Dikdörtgenin çevresinin alanına oranı = %d", 2*(dikdortgeninKisaKenar + dikdortgeninUzunKenar) / dikdortgeninKisaKenar * dikdortgeninUzunKenar);
return 0;
}
*/

/*
Örnekler - 2;


#define pi 3.14
int main()
{
    setlocale(LC_ALL, "Turkish");

  // float cemberinYaricapi;

    printf("Çemberin Yarýçapýný Giriniz...\n");
    scanf("%f", &cemberinYaricapi);

    printf("%f\n", pi);
    printf("Çemberin Alaný: %f\n", pi*cemberinYaricapi*cemberinYaricapi);
    printf("Çemberin Çevresi: %f", 2*pi*cemberinYaricapi);
//
    float kupBirKenar;

    printf("Bana bir küp kenarý söyle sana hacmini ve yanal alanlarý toplamýný söyleyeyim... \n");
    scanf("%f", &kupBirKenar);

    float yanalAlanlarinToplami =  6 * kupBirKenar * kupBirKenar;
    float kupunHacmi = kupBirKenar * kupBirKenar * kupBirKenar;

    printf("Küpün yanal alanlarý toplamý: %.2f\n", yanalAlanlarinToplami);
    printf("Küpün hacmi: %.3f", kupunHacmi);


    return 0;
}

*/

/*
 Örnekler - 3;


 int main()
{


 float a,b,c,x;

    printf("Sýrasýyla a,b,c ve x deðerlerini giriniz. \a\n");
    scanf("%f%f%f%f", &a,&b,&c,&x);
    float sonuc = a*x*x + b*x + c;
    printf("Denklemin sonucu: %d",(int)sonuc);

// int -> float -> double

int x = 30;
float y = 30;
double z = 30;

printf("%f\n", x/y);
printf("%f", y/z);
return 0;
}
*/
/*
Örnekler - 4;
int main()
{
    int sayi,onbinler,binler,yuzler,onlar,birler;


    printf("5 basamaklý bir sayý giriniz...\a\n");
    scanf("%d", &sayi);

    onbinler = sayi / 10000;
    binler = (sayi % 10000) / 1000;
    yuzler = (sayi % 1000) / 100;
    onlar = (sayi % 100) / 10;
    birler = (sayi % 10);

    printf("Sayýnýn onbinler basamaðýnýn sayý deðeri: %d\n",onbinler);
    printf("Sayýnýn binler basamaðýnýn sayý deðeri: %d\n",binler);
    printf("Sayýnýn yüzler basamaðýnýn sayý deðeri: %d\n",yuzler);
    printf("Sayýnýn onlar basamaðýnýn sayý deðeri: %d\n",onlar);
    printf("Sayýnýn binler basamaðýnýn sayý deðeri: %d\n",birler);


    printf("%d     %d     %d     %d     %d   \n",onbinler,binler,yuzler,onlar,birler);

    return 0;
}
*/











