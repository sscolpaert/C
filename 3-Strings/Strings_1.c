// O programa solicita que o usuário digite uma string e, em seguida, percorre a string inteira, exibindo caractere por caractere.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main () {
    // declaracao da string
    char palavra [20];
    int i;
    // leitura da string
    printf ("*** Digite a string ***\n");
    gets (palavra);
    //laco para percorrer a string
    while (palavra [i] != '\0'){
           printf ("\n %c", palavra [i]);
           i++;
    } 
    system ("PAUSE");
}