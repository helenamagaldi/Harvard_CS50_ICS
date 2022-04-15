#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define elementos 7

void quicksort(int vetorq[], int esquerda, int direita) {
  int pivo = esquerda;
    int posicaoq, menor, auxiliar, i;

    for(posicaoq=esquerda+1;posicaoq<=direita;posicaoq++) {
    auxiliar = posicaoq;
      if(vetorq[auxiliar] < vetorq[pivo]) {
        menor = vetorq[auxiliar];
        while (auxiliar > pivo) {
          vetorq[auxiliar] = vetorq[auxiliar-1];
          auxiliar--;
      }
        vetorq[auxiliar] = menor;
        pivo++;
      }
    }
    if(pivo-1 >= esquerda) {
      quicksort(vetorq,esquerda,pivo-1);
  }
  if(pivo+1 <= direita){
    quicksort(vetorq,pivo+1,direita);
  }
  }

main() {
  int posicao,vetor[elementos];

  printf("\n Vetor inicial:n");
  for(posicao=0; posicao<elementos; posicao++)
    vetor[posicao]=rand()%100;
  for(posicao=0; posicao<elementos; posicao++)
    printf("%d ", vetor[posicao]);
  quicksort(vetor,0,elementos-1);
  printf("\n Vetor ordenado pelo quicksort:\n");
  for(posicao=0; posicao<elementos; posicao++)
    printf("&d ", vetor[posicao]);
}