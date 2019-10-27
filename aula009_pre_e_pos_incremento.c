#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){

    system("title Pré e Pós Incremento");
    setlocale(LC_ALL, "Portuguese-brazilian");

    int x = 10, y = 10, a = 10, b = 10, c = 10, d = 10;
    x++; 
    //incremento da variável x, a mesma coisa que escrever x = x + 1
    --y; 
    /* decremento da variável y, quando a variável não impacta em outra variável,
    não importa se o operador de incremento ou decremento está antes ou após a variável,
    isto é  mesma coisa que escrever y = y - 1 */
    a = b++; 
    /* nesta operação, a valerá 10, pois recebeu o valor de b antes do incremento, 
    já a variável b passará a valer 11 */
    c = ++d;
    /* nesta operação, c valerá 11, pois recebeu o valor de d depois do incremento, 
    e a variável d passará a valer 11 também */

    printf ("\nO valor de x é: %d\n", x);
    printf ("\nO valor de y é: %d\n", y);
    printf ("\nO valor de a é: %d\n", a);
    printf ("\nO valor de b é: %d\n", b);
    printf ("\nO valor de c é: %d\n", c);
    printf ("\nO valor de d é: %d\n\n", d);

    system("pause");
    return 0;
}