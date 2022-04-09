#include <stdio.h>
#include <stdlib.h>

int main()
{

  int vetor[] = {1997, 2007, 2017};
  int *ano;

  ano = &vetor[0];
  ano++;

  printf("valor: %d\n", *ano);
  (*ano)++;

  printf("valor: %d\n", *ano);

  return 0;
}