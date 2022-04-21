// #include <stdio.h>
// #include <stdlib.h>

// typedef struct Music
// {
//   char name[32];
//   char artist[24];
//   float duration;
// }Music;

// struct treenode
// {
//   void *data;
//   struct treenode* left;
//   struct treenode* right;
// };

// struct treenode* createNode(void *data);

// struct treenode* tobinarytree(struct Music** musics, int start, int end)
// {
//   if (start > end)
//     return NULL;

//   int mid = (start + end)/2;
//   struct treenode *root = createNode(musics[mid]);

//   root->left = tobinarytree(musics, start, mid-1);

//   root->right = tobinarytree(musics, mid+1, end);

//     return root;
// }

// struct treenode* createnode(void *data)
// {
//   struct treenode* node = (struct treenode*)malloc(sizeof(struct treenode));
//     node->data = data;
//     node->left = NULL;
//     node->right = NULL;

//   return node;
//   }

// void preOrder(struct treenode* node)
// {
//   if (node == NULL)
//     return;
//   struct Music *info = node->data;
//   printf("%s %s %v %.2f ", info->name, info->artist, info->duration);
//   preOrder(node->right);
//   preOrder(node->left);
// }

// void main() {
//   struct *root = tobinarytree(&musics, 0, n-1);
// }