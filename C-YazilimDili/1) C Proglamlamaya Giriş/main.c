#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* burasi yorum satiridir */
// Program ilk basladiginda main fonksiyonu çalisir.


int main()
{
    //setlocale bizim dil ayarlarini yapmamizi saðlar.
    setlocale(LC_ALL, "Turkish");
    printf("Merhaba Dünya");
    return 0;
}
