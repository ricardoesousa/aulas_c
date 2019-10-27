#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){

    system("title Comando Scanf");
    setlocale(LC_ALL, "Portuguese");

    int nro = 23;
    float n = 5.5457;
 
    printf("\nDigite dois números: \n\n");
    scanf("%d%f",&nro,&n);
    printf("\nOs números são: %d e %f\n\n", nro, n);
    system("pause");

return 0;
}