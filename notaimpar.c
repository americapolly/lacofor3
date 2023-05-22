#include <stdio.h>

int main(void) {
int notaAluno;
int qtdAluno = 10;
float somaNota = 0;
float divisorNota =0;
int i;
for(i = 1; i <= qtdAluno; i++){
 
  printf("escreva a nota %d \n", i);
  scanf("%d",&notaAluno);
  if(notaAluno%2==0){
  }
  else
  {
    somaNota = somaNota + notaAluno;
    divisorNota++;
   
  }
}
  printf("media da turma impar %.2f \n", somaNota/divisorNota);
 
  return 0;
}
