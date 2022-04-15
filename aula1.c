#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int numero = 6;
  int numero2;
  char texto[4] = "ola";
  float decimal = 10.2;
  printf("o numero escolhido foi: %d\n", numero);
  printf("%s\n", texto);
  printf("%.2f\n\n", decimal);

  // leitura de variaveis:
  printf("Informe um numero: ");
  scanf("%d", &numero2);
  printf("O numero informado foi: %d\n", numero);
  
  return 0;
}