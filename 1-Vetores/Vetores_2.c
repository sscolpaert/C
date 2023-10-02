// O enunciado é: Criar um programa que leia 8 elementos inteiros em um vetor A. 
// Construir um vetor B do mesmo tipo e tamanho com os elementos do vetor A multiplicados por 3. 
// O elemento B[0] recebe o elemento A[0] * 3, o elemento B[1] recebe o elemento A[1] * 3 e assim por diante, até a posição 7 do vetor. 
// Apresentar os elementos do vetor B.
// 

#include <stdio.h>
#include <stdlib.h>
#define TAM 8
main () {
    // declaração dos dois vetores
    int A[TAM], B[TAM];
    int i;
    // leitura do vetor A
    printf ("*** Informe os dados do vetor A ***\n");
    for (i = 0; i < TAM; i++) {
        printf ("A[%d]: ", i);
        scanf ("%d", &A[i]);
    }
    // cálculo do vetor B
    for (i = 0; i < TAM; i++) {
        B[i] = A[i] * 3;
    }
    // apresentação dos elementos do vetor B
    printf ("\n*** Dados do vetor B *** \n");
    for (i = 0; i < TAM; i++) {
        printf ("B[%d] = %d\n", i, B[i]);
    }
    system ("PAUSE");
}