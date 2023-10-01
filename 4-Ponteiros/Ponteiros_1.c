// Um programa que possui uma variável inteira x e um ponteiro px, que contém o endereço de memória de x.

#include <stdio.h>
#include <stdlib.h>

main(){
    int x = 15;
     //  A variável px é declarada como um ponteiro, utilizando-se o operador *.
    int *px;
    // A variável px recebe o endereço de memória de x, utilizando-se o operador &.
    px = &x;
    
    printf ("Endereco de memoria de x = %p", &x);
    printf ("Conteudo da variavel x por meio do ponteiro p = %d", *px);
    printf ("Conteudo da variavel px = %p", px);
    printf ("Endereco de memoria de px = %p", &px);
    system ("PAUSE");
}