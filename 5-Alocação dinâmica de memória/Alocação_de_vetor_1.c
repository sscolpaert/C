// No programa a seguir, é mostrado um exemplo da alocação de um vetor de número inteiros de tamanho que pode ser definido pelo usuário. 
// Dessa forma, a alocação do espaço de memória para o vetor é feita, dinamicamente, por meio da função malloc. 
// Antes de finalizar o programa, a variável é liberada da memória por meio da função free.

#include<stdio.h>
#include<stdlib.h>
 
main()
{
    int *vet, tam, i;
    
    printf ("\n Digite o tamanho do vetor:");
    scanf("%d",&tam);
    
    vet = (int *) malloc(tam* sizeof (int));           
    
    for(i=0;i<tam;i++)
    {
      printf (" elemento:");
      scanf("%d",&vet[i]); 
    }   
 
    
for(i=0;i<tam;i++)
    {
      printf ("\n vet[%d]=%d",i,vet[i]);
    }
    system ("PAUSE");
 
    free (vet);//desalocação do vetor
}