#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){

    system("title Coment�rios");
    setlocale(LC_ALL, "Portuguese-brazilian");

    // <-Essas duas barras inclinadas fazem com que tudo que estiver escrito depois dela se torne um comentario, por�m na mesma linha.
    
    /*  
    Tudo o que estiver dentro destes
    dois comandos se tornar� coment�rio,
    independente de utilizarmos
    mais que uma linha!   
     */

    printf("\nComent�rios\n\n");
    
    system("pause");
    return 0;
}