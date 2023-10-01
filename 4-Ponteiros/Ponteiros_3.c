// O programa abaixo contém as variáveis pa e pb como ponteiros para número real (float).

#include <stdio.h>
#include <stdlib.h>

main(){
    float A, B, R;
    float *pa, *pb;
    A = 7.3;
    B = 11.5;
    pa = &A;
    pb = &B;
    // Ocorre a atribuição da soma dos valores das variáveis a e b à variável r, de forma indireta, por meio da utilização dos ponteiros
    R = *pa + *pb;
    printf ("Soma de A e B via ponteiros = %f", R);
    system ("PAUSE");
}