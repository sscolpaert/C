// Neste programa, a letra “a” é substituída pela letra “i” em uma string de tamanho 15. Por fim, a string alterada é exibida.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main () {
    // declaração da string
    char palavra [15];
    int i, tam;
    // leitura da string
    printf ("*** Digite a string ***\n");
    gets (palavra);
    tam = strlen (palavra); // tam armazenará o tamanho da string
    for (i = 0; i<tam; i++){
          if (palavra [i] == 'a')
                palavra [i] = 'i';
    }
    puts (palavra);
    system ("PAUSE");