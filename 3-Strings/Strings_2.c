// Um palíndromo é uma palavra, frase ou qualquer outra sequência de caracteres que tenha a propriedade de poder ser lida tanto
// da direita para a esquerda como da esquerda para a direita.  
// O programa solicita que o usuário digite uma string, faz a inversão dos caracteres e verifica se a palavra é um palíndromo.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main () {
    // declaração das strings
    char palavra [20], palavra_invertida [20];
    int i, j=0, tam;
    // leitura da string
    printf ("*** Digite a string ***\n");
    gets (palavra);
    tam = strlen (palavra); // tam armazenará o tamanho da string
    for (i = tam-1; i>=0; i--){
          palavra_invertida [j] = palavra [i]; 
          j++;
    }
    palavra_invertida [j] = '\0';
    if  ( strcmp (palavra, palavra_invertida) == 0)
          printf ("\n A palavra e um palindromo!");
    else printf ("\n A palavra e nao palindromo!");  
    system ("PAUSE");
}