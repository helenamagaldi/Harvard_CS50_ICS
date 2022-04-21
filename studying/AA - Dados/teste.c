#include <stdio.h>
#include <stdlib.h>

typedef struct treenode {
  int data;
  char name[20];
  char artist[20];
  float duration;
  struct treenode *right;
  struct treenode *left;
} treenode;

treenode *createnode(int data, char name, char artist, float duration){
  treenode* result = malloc(sizeof(treenode));
  if (result != NULL) {
    result->right = NULL;
    result->left = NULL;
    result->data = data;
    }
  return result;
}

void printtree(treenode *root){
  if (root == NULL){
    printf("---<empty>---\n");
    return;
  }
  printf("data = %d\n", root->data);
  printf("artist = %s\n", root->name);
  printf("right\n");
  printtree(root->right);
  printf("left\n");
  printtree(root->left);
  printf("done\n");
}

int main() {
  treenode *n1 = createnode(10, "envolver", "anitta", 3.52);
  treenode *n2 = createnode(11, "vai, senhora", "anitta", 3.3);
  treenode *n3 = createnode(12, "Rainha da Favela", "Ludmilla", 2.40);
  treenode *n4 = createnode(12, "me gusta", "Anitta, Cardi B", 10.00);
  treenode *n5 = createnode(12, "Diaba", "Urias", 5.45);

  
  n1->left = n2;
  n1->right = n3;
  n3->left = n4;
  n3->right = n5;

  printtree(n1);
  printf("%s", n1);
  
  free(n1);
  free(n2);
  free(n3);
  free(n4);
  free(n5);
  }