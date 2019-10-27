#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){

    system("title Operador de Atribuição");
    setlocale(LC_ALL, "Portuguese");

    int x = 5, y, a, b, c; //é possível declarar a variável e ao mesmo tempo atribuir ou não um valor para ela
    y = x; //uma variável pode ter o valor de outra variável
    x = y + 10; //uma variável pode ser o resultado de uma oparação
    a = b = c = 10; //pode-se atribuir valores de uma variável para outra como se fosse um efeito dominó
     
    printf("\nOs valores são:\n\n%d\n%d\n%d\n%d\n%d\n\n", x,y,a,b,c);
    
    system("pause");
    return 0;
}