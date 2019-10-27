#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){

    system("title Declaração de Variáveis");
    setlocale(LC_ALL, "Portuguese");
    printf("\nDeclaração de Variáveis\n\n");
    system("pause");

//declaração de variáveis - tipos e formas:
char; //caracter, usar = ' ' para escrever o valor da variável, aceita números de -128 a 127
int; //número inteiro
float; //número real, não se usa vírgula em número quebrado, o correto é usar "."
double; //número real, com maior precisão e quantidade de casas após a vírgula

//as variáveis não podem ter acento, caracteres especiais, "ç"
//a linguagem faz distinção entre letras minúsculas e maiúsculas
//não se pode escrever uma variável iniciando por número, mas é possível usar "_" no ínicio
return 0;
}