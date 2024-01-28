#include <stdio.h>
#include <stdlib.h>

int main()
{

    //char isim[4] = "Cam";

  /*  char isim[4] = {'C', 'a', 'm', '\0'};

    for(int i=0;i<4;i++){
        printf("%d. elemani = %c\n",i,isim[i]);
    if(isim[i] == '\0'){
        printf("Dizimiz tamamlanmistir...");
    }

    }
*/


    char takimIsmi[] = {'B', 'a', 'r', 'c', 'a', '\0'};


   /* for(int i=0;i<6;i++){
        printf("%c", takimIsmi[i]);  }
 */

        printf("%s", takimIsmi);



    return 0;
}
