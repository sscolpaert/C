// Para exemplificarmos a utilização dos procedimentos e funções, abaixo segue o programa da calculadora escrito de forma estruturada ou modular.
// Observe que a entrada e saída de dados foram transformadas em procedimentos e as operações matemáticas em funções.
// -Colpaert

#include <stdio.h> 
#include <stdlib.h>
#include <conio.h>
 
float A, B, R;
 
void Entrada ( )
{
       printf("\nDigite o primeiro numero: ");
       scanf("%f",&A);
       printf("\nDigite o segundo numero: ");
       scanf("%f",&B);    
}
 
float  Adicao ( )
{
       R = A + B;
       return (R);
}
float  Subtracao ( )
{
       R = A - B;
       return (R);
}
float  Multiplicacao ( )
{
       R = A * B;
       return (R);
}
float  Divisao ( )
{
       R = A / B;
       return (R);
}
 
main ()
{
  int opcao=0;
  float result;
 
  while (opcao!=5)
  {
  system("cls");
  printf("\n1-adicao");         
  printf("\n2-subtracao");   
  printf("\n3-multiplicacao");  
  printf("\n4-divisao");   
  printf("\n5-sair");
  printf("\n\n-Escolha um num:");
  scanf("%d",&opcao);
  
  switch(opcao)
   {
     case 1:
     {     
          Entrada ();
          result = Adicao ();
          printf ("\n A + B = %f", result);
          break;  
     }          
case 2:
     {     
          Entrada ();
          result = Subtracao ();
          printf ("\n A - B = %f", result);
          break;  
     }  
case 3:
     {     
          Entrada ();
          result = Multiplicacao ();
          printf ("\n A * B = %f", result);
          break;  
     }          
      case 4:
     {     
          Entrada ();
          result = Divisao ();
          printf ("\n A / B = %f", result);
          break;  
     }          
 
     default:printf("\nEsta operacao nao existe");
   } 
   }
system("PAUSE");                           
}