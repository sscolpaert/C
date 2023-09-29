// O programa a seguir faz a leitura de dois vetores (denominados A e B) com 20 elementos inteiros. 
// No vetor C, cada elemento é calculado como a subtração de um elemento do vetor A com um elemento correspondente do vetor B, 
// ou seja, a operação de processamento é baseada na operação C[I] = A[I] - B[I]. Ao final, os elementos do vetor C são apresentados.

#include <stdio.h>
#include <stdlib.h>
#define TAM 20
main () {
   // declaração dos vetores
   int A[TAM], B[TAM], C[TAM];
   int i;
   // leitura do vetor A
   printf ("*** Informe os valores do vetor A ***\n");
   for (i = 0; i < TAM; i++) {
      printf ("A[%d]: ", i);
      scanf ("%d", &A[i]);
   }
   // leitura do vetor B
   printf ("\n*** Informe os valores do vetor B ***\n");
   for (i = 0; i < TAM; i++) {
      printf ("B[%d]: ", i);
      scanf ("%d", &B[i]);
    }
   // calculo e impressao do vetor C
    printf ("\n*** Valores do vetor C ***\n");
    for (i = 0; i < TAM; i++) {
          C[i] = A[i] - B[i];
          printf ("C[%d] = %d\n", i, C[i]);
    }
    printf ("\n\n");
    system ("PAUSE");
}