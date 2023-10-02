// Um programa com as variáveis p e q como ponteiros para número inteiro.
// -Colpaert

#include <stdio.h>
#include <stdlib.h>

main(){
    int a, b;
    int *p, *q;
    a = 5;
    b = 15;
    p = &a;
    // Observe que: é feita uma atribuição à variável q, que passa a ter o mesmo valor (endereço de memória de a) armazenado em p. 
    q = p;
    // Ao modificarmos o conteúdo apontado por q, o valor armazenado em a será alterado, visto que a variável q também aponta para a variável a.
    *q = 25;
    printf ("Conteudo da variavel a = %d", a);
    system ("PAUSE");
}