#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define a 2012.86 /*forma de declaração de uma constante sem ocupar espaço na memória, 
acontecerá a substituição na hora de compilar o programa, 
na hora de declarar coloca-se #define nome da variável valor*/

int main(){

    system("title Constantes");
    setlocale(LC_ALL, "Portuguese");

    int const b = 10; //forma de declaração de uma constante alocando espaço em memória
    
    /* a = 12; (uma constante não pode ser alterada em momento algum no código/programa, 
    caso aconteça o programa não será compilado);
    a variável constante é utilizada quando queremos que ela não seja alterada em hipótese alguma, 
    ela já deve ter um valor desde quando é criada */

    printf("\nConstante a: %f\n\n", a);
    printf("\nConstante b: %d\n\n", b);
    
    system("pause");
    return 0;
}