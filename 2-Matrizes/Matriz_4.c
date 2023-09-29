// o programa faz a leitura de uma matriz 5x3 de elementos reais, calcula e apresenta a média dos valores que estão acima de 20,75; 
// apresenta, também, os elementos da matriz.

#include <stdio.h>
#include <stdlib.h>
#define LINHAS 5
#define COLUNAS 3
main () {
     // declara a matriz
     float matriz[LINHAS][COLUNAS];
     int i, j;
     // lê os dados para a matriz
     printf ("*** Informe os dados da matriz ***\n");
     for (i = 0; i < LINHAS; i++) {
         for (j = 0; j < COLUNAS; j++) {
               printf ("Valor[%d][%d]: ", i, j);
               scanf ("%f", &matriz[i][j]);
         }
      }
     // soma os elementos superiores a 20,75
     // guarda a quantidade de elementos somados
     // apresenta os dados da matriz na tela
     float soma = 0;
     int quantidade = 0;
     printf ("\n*** Dados da Matriz ***\n\n");
     for (i = 0; i < LINHAS; i++) {
          for (j = 0; j < COLUNAS; j++) {
              printf ("%.2f ", matriz[i][j]);
              if (matriz[i][j] > 20.75) {
                      soma += matriz[i][j];
                      quantidade++;
              }
          }
          printf ("\n");
    }
    float media = 0;
    if (quantidade > 0) {
          media = soma / quantidade;
    }
    printf ("\nMedia = %.2f\n\n", media);
    system ("PAUSE");
}