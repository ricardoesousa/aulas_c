#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){

    system("title Atribui��o Simplificada");
    setlocale(LC_ALL, "Portuguese-brazilian");

    int x = 10, y = 10, a = 10, b = 10, c = 10, d = 10, e = 10, f = 10, g = 15, h = 10;
    
    x += y; // � o mesmo que x = x + y
    a -= b; // � o mesmo que a = a - b
    c /= d; // � o mesmo que c = c / d
    e *= f; // � o mesmo que e = e * f
    g %= h; // � o mesmo que g = g % h

    printf ("\nO valor de x �: %d\n", x);
    printf ("\nO valor de a �: %d\n", a);
    printf ("\nO valor de c �: %d\n", c);
    printf ("\nO valor de e �: %d\n", e);
    printf ("\nO valor de g �: %d\n\n", g);
    
    system("pause");
    return 0;
}