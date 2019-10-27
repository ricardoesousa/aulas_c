#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){

    system("title Opera��es Aritm�ticas");
    setlocale(LC_ALL, "Portuguese-brazilian");

    /*
    soma            +
    subtra��o       -
    multiplica��o   *
    divis�o         /
    resto           % (resto da divis�o)
    */

    int x1, x2 = 25, x3 = 13, x4, x5;
    char ch1, ch2 = "0", ch3 = "1", ch4, ch5;
    float f1, f2 = 5.25, f3 = 10.5, f4, f5, f6, f7;

    x1 = x2 - x3; 
    ch1 = ch2 + ch3; 
    // o resultado ser� um valor na tabela ASCII
    ch4 = 80 + 20; 
    /* � poss�vel declarar n�meros de -128 a 127 na vari�vel do tipo char, 
    o resultado da opera��o � um caracter da tabela ASCII 
    (desde que o resultado esteja entre -128 e 127) */ 
    ch5 = 1 + "C";
    /* o resultado da opera��o � um caracter da tabela ASCII 
    (desde que o resultado esteja entre -128 e 127) */
    f1 = -(f2 * f3);
    x4 = x3 / 2; 
    /* vari�vel do tipo n�mero inteiro, 
    opera��o com n�meros inteiros,
    o resultado � inteiro, 
    mesmo havendo resto depois da v�rgula */
    f4 = x3 / 2;
    /* vari�vel do tipo n�mero real, 
    opera��o com n�meros inteiros,
    o resultado � inteiro, 
    mesmo havendo resto depois da v�rgula
    e mesmo a vari�vel sendo um n�mero real */
    f5 = x3 / 2.0;
    /* vari�vel do tipo n�mero real, 
    opera��o com n�mero inteiro e n�mero real,
    o resultado � real
    um dos n�mero deve ser real, 
    para que o resultado seja real */
    f6 = f5 + 10 / 2;
    f7 = (f5 + 10) / 2;
    /* tomar cuidado com as regras de preced�ncia da matem�tica,
    pois as express�es acima ter�o resultados diferentes */
    x5 = x2 % 2;
    /* o operador resto s� funciona com n�meros inteiros */
    
    printf ("\nx1 = %d\n", x1);
    printf ("ch1 = %c\n", ch1);
    printf ("ch4 = %c\n", ch4);   
    printf ("ch5 = %c\n", ch5);   
    printf ("f1 = %f\n", f1);
    printf ("x4 = %d\n", x4);
    printf ("f4 = %f\n", f4);
    printf ("f5 = %f\n", f5);
    printf ("f6 = %f\n", f6);
    printf ("f7 = %f\n", f7);
    printf ("x5 = %d\n\n", x5);

    system("pause");
    return 0;
}