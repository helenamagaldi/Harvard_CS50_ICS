#include <stdlib.h>
#include <stdio.h>

void printar(int *array, int size) 
{
    printf("-");
    for (int i = 0; i < size - 1; i++) {  
        printf("%i, ", array[i]);
    }
    if (size >= 1) printf("%i", array[size-1]); 
    printf("-"); 
}

int main(void) 
{
    int count;
    printf("qual o tamanho do array que voc&* gostaria");
    scanf("%d", &count);

    int *array = malloc(count * sizeof(*array));
  
    printf("quais elementos vc quer no array");
    for (int i = 0; i < count; i++) scanf("%d", &array[i]);

    printar(array, count);

}