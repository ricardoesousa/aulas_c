#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){

    system("title Declara��o de Vari�veis");
    setlocale(LC_ALL, "Portuguese");
    printf("\nDeclara��o de Vari�veis\n\n");
    system("pause");

//declara��o de vari�veis - tipos e formas:
char; //caracter, usar = ' ' para escrever o valor da vari�vel, aceita n�meros de -128 a 127
int; //n�mero inteiro
float; //n�mero real, n�o se usa v�rgula em n�mero quebrado, o correto � usar "."
double; //n�mero real, com maior precis�o e quantidade de casas ap�s a v�rgula

//as vari�veis n�o podem ter acento, caracteres especiais, "�"
//a linguagem faz distin��o entre letras min�sculas e mai�sculas
//n�o se pode escrever uma vari�vel iniciando por n�mero, mas � poss�vel usar "_" no �nicio
return 0;
}