#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){

    system("title Operador de Atribui��o");
    setlocale(LC_ALL, "Portuguese");

    int x = 5, y, a, b, c; //� poss�vel declarar a vari�vel e ao mesmo tempo atribuir ou n�o um valor para ela
    y = x; //uma vari�vel pode ter o valor de outra vari�vel
    x = y + 10; //uma vari�vel pode ser o resultado de uma opara��o
    a = b = c = 10; //pode-se atribuir valores de uma vari�vel para outra como se fosse um efeito domin�
     
    printf("\nOs valores s�o:\n\n%d\n%d\n%d\n%d\n%d\n\n", x,y,a,b,c);
    
    system("pause");
    return 0;
}