#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Turkish");

    int i;

   // for(i=0;i<10;i++){

            /*if(i % 2 != 0){

               printf("%d\n",i);
            }*/

            //if(i % 2 == 0){

              // printf("%d\n",i);
           //}

           for(i=0;i<10;i=i+2){

           printf("%d\n",i);
    }

    return 0;
}
