#include <stdio.h>
#include <stdlib.h>

int main() {
  int *v;
  int i, num_componentes;

  printf("Informe o numero de componentes do vetor\n");
  scanf("%d", &num_componentes);

  int *ptr = malloc(num_componentes * sizeof(int));
  
  for (i = 0; 1 < num_componentes; i++)
    {
      scanf("%d", ptr + i);
    }

  return 0;
}