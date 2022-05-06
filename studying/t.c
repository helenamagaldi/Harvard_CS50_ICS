#include <stdio.h>
 
struct complexos {
   int real, abstrato;
};
 // 
main() {
    struct complexos x, y, z;
 
    printf("Valor de x \n");
    printf("x = ");
    scanf("%d", &x.real);
    printf("vValor de y ");
    scanf("%d", &x.abstrato);
    printf("Valor de z \n");
    printf("z  = ");
    scanf("%d", &y.real);

  z.real = x.real + y.real;
  
  z.abstrato = x.abstrato + y.abstrato;
    
  if (z.abstrato >= 0)
        printf("soma: %d + %di", z.real, z.abstrato);
    else
        printf("soma: %d %di", z.real, z.abstrato);
    return 0;
}