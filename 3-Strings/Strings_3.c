//  Neste programa é feita a contagem de todas as vogais existentes em uma string de tamanho 30. Por fim, é mostrada a quantidade de vogais.
// -Colpaert

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main() {
    // declaração da string
    char palavra [30];
    int i= 0, qtde=0;
    // leitura da string
    printf ("*** Digite a string ***\n");
    gets (palavra);
    //laço para percorrer a string
    while (palavra [i] != '\0'){
           if (palavra [i] == 'a' || palavra [i] == 'e' || palavra [i] == 'i' || palavra [i] == 'o' || palavra [i] == 'u') 
           {   
                 qtde++;         
           }
           i++;
    }
    printf ("\n A quantidade de vogais da palavra e = %d\n", qtde);
    system ("PAUSE");
}