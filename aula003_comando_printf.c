#include<stdio.h>
#include<stdlib.h>

int main(){

    system("title Comando Printf");
    
    char letra = 'a';
    int nro = 10;
    
    float n = 5.25;
 
    printf("\n%c \n",letra); //escrevendo o caracter propriamente dito
    printf("%d \n",letra); //escrevendo o valor numérico desta letra na tabela ASCII
    printf("%d \n",nro); //escrevendo o valor numérico inteiro
    printf("%f \n\n",n); //escrevendo o valor numérico com até 5 casas decimais
    
    system("pause");

return 0; 
}
