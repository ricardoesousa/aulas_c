#include<stdio.h> //biblioteca de leitura e escrita do programa (escrever na tela e ler no teclado, por exemplo)
#include<stdlib.h> //biblioteca auxiliar, neste caso com ela vou poder usar o comando system("pause")

int main(){ //este � o corpo do programa (todos utilizam este comando)

    system("title Hello World em C"); //comando para atribuir um t�tulo para a janela do programa
    printf("\nHello world\n\n"); //todo comando termina com ponto e v�rgula
    system("pause"); //� preciso colocar a biblioteca #include<stdlib.h> e o comando de system("pause") para que o programa fa�a uma pausa depois de ser executado

return 0; 
}
