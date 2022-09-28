#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {
  int aleatorio,n,cont=0;
  srand( time(NULL));
    aleatorio=rand()%20;
  
  do{
  printf("chute o numero gerado:\n");
  scanf("%d",&n);
  if(n<aleatorio)
    printf("numero gerado e maior \n");
  else
    printf("numero gerado e menor \n");

  cont++;
  }while(cont<5 && n!=aleatorio);
  if(n==aleatorio)
      printf("voce acertou");
  
  return 0;
}