#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){

    system("title Comentários");
    setlocale(LC_ALL, "Portuguese-brazilian");

    // <-Essas duas barras inclinadas fazem com que tudo que estiver escrito depois dela se torne um comentario, porém na mesma linha.
    
    /*  
    Tudo o que estiver dentro destes
    dois comandos se tornará comentário,
    independente de utilizarmos
    mais que uma linha!   
     */

    printf("\nComentários\n\n");
    
    system("pause");
    return 0;
}