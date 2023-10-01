// O programa a seguir armazena 10 elementos reais em um vetor e, depois, apresenta seus valores na tela.
// -Caerleon

#include <stdio.h>
#include <stdlib.h>
#define TAM 10
main () {
     // declaração de um vetor de 10 elementos reais
     float vetor[TAM];
     int i;
     // leitura dos dados para o vetor
     printf ("*** Informe os valores para o vetor ***\n");
     for (i = 0; i < TAM; i++) {
           printf ("Valor[%d]: ", i);
           // não esquecer de colocar o & antes do nome do vetor
           scanf ("%f", &vetor[i]);
     }
     // apresentação dos dados do vetor
     printf ("\n\n*** Dados do vetor ***\n");
     for (i = 0; i < TAM; i++) {
          printf ("%.2f\n", vetor[i]);
     }
     system ("PAUSE");