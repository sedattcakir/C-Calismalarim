#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* burasi yorum satiridir */
// Program ilk basladiginda main fonksiyonu �alisir.


int main()
{
    //setlocale bizim dil ayarlarini yapmamizi sa�lar.
    setlocale(LC_ALL, "Turkish");
    printf("Merhaba D�nya");
    return 0;
}
