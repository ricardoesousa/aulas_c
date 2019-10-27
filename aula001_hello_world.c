#include<stdio.h> //biblioteca de leitura e escrita do programa (escrever na tela e ler no teclado, por exemplo)
#include<stdlib.h> //biblioteca auxiliar, neste caso com ela vou poder usar o comando system("pause")

int main(){ //este é o corpo do programa (todos utilizam este comando)

    system("title Hello World em C"); //comando para atribuir um título para a janela do programa
    printf("\nHello world\n\n"); //todo comando termina com ponto e vírgula
    system("pause"); //é preciso colocar a biblioteca #include<stdlib.h> e o comando de system("pause") para que o programa faça uma pausa depois de ser executado

return 0; 
}
