#include <stdio.h>

 

struct complexos {

  int real, abstrato;

};

struct complexos adicao(struct complexos x, struct complexos y);

 



struct complexos adicao(struct complexos x, struct complexos y) {
 struct complexos z;
   z.real = x.real + y.real;

  

 z.abstrato = x.abstrato + y.abstrato;

  return z;
  }
  

 // z.real = x.real + y.real;

 // z.abstrato = x.abstrato + y.abstrato;

   

 if (z.abstrato >= 0)

    printf("soma: %d + %di", z.real, z.abstrato);

  else

    printf("soma: %d %di", z.real, z.abstrato);

  return 0;

}

