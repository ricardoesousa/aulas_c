#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define a 2012.86 /*forma de declara��o de uma constante sem ocupar espa�o na mem�ria, 
acontecer� a substitui��o na hora de compilar o programa, 
na hora de declarar coloca-se #define nome da vari�vel valor*/

int main(){

    system("title Constantes");
    setlocale(LC_ALL, "Portuguese");

    int const b = 10; //forma de declara��o de uma constante alocando espa�o em mem�ria
    
    /* a = 12; (uma constante n�o pode ser alterada em momento algum no c�digo/programa, 
    caso aconte�a o programa n�o ser� compilado);
    a vari�vel constante � utilizada quando queremos que ela n�o seja alterada em hip�tese alguma, 
    ela j� deve ter um valor desde quando � criada */

    printf("\nConstante a: %f\n\n", a);
    printf("\nConstante b: %d\n\n", b);
    
    system("pause");
    return 0;
}