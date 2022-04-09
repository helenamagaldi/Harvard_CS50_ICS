#include <stdio.h>

int main(void) {
  int* pc;
  int c;
  c = 22;
  
  printf("c1. Endereço de c: %p\n", &c);
  printf("c1. Valor de c: %d\n\n", c);

  pc = &c;
  
  printf("c1. Endereço apontado por pc: %p\n", pc);
  printf("c1. Conteúdo da variável apontada por pc: %d\n\n", *pc);

  c = 11;

  printf("c2. Endereço apontado por pc: %p\n", pc);
  printf("c2. Conteúdo do ponteiro pc: %d\n\n", *pc);

  *pc = 2;

  printf("c2. Endereço da variável c: %p\n", &c);
  printf("c2. Valor armazenado em c: %d\n\n", c);

  return 0;
}