#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){

    system("title Pr� e P�s Incremento");
    setlocale(LC_ALL, "Portuguese-brazilian");

    int x = 10, y = 10, a = 10, b = 10, c = 10, d = 10;
    x++; 
    //incremento da vari�vel x, a mesma coisa que escrever x = x + 1
    --y; 
    /* decremento da vari�vel y, quando a vari�vel n�o impacta em outra vari�vel,
    n�o importa se o operador de incremento ou decremento est� antes ou ap�s a vari�vel,
    isto �  mesma coisa que escrever y = y - 1 */
    a = b++; 
    /* nesta opera��o, a valer� 10, pois recebeu o valor de b antes do incremento, 
    j� a vari�vel b passar� a valer 11 */
    c = ++d;
    /* nesta opera��o, c valer� 11, pois recebeu o valor de d depois do incremento, 
    e a vari�vel d passar� a valer 11 tamb�m */

    printf ("\nO valor de x �: %d\n", x);
    printf ("\nO valor de y �: %d\n", y);
    printf ("\nO valor de a �: %d\n", a);
    printf ("\nO valor de b �: %d\n", b);
    printf ("\nO valor de c �: %d\n", c);
    printf ("\nO valor de d �: %d\n\n", d);

    system("pause");
    return 0;
}