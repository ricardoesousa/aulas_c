#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){

    system("title Atribuição Simplificada");
    setlocale(LC_ALL, "Portuguese-brazilian");

    int x = 10, y = 10, a = 10, b = 10, c = 10, d = 10, e = 10, f = 10, g = 15, h = 10;
    
    x += y; // é o mesmo que x = x + y
    a -= b; // é o mesmo que a = a - b
    c /= d; // é o mesmo que c = c / d
    e *= f; // é o mesmo que e = e * f
    g %= h; // é o mesmo que g = g % h

    printf ("\nO valor de x é: %d\n", x);
    printf ("\nO valor de a é: %d\n", a);
    printf ("\nO valor de c é: %d\n", c);
    printf ("\nO valor de e é: %d\n", e);
    printf ("\nO valor de g é: %d\n\n", g);
    
    system("pause");
    return 0;
}