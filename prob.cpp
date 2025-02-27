#include<stdio.h>
#include<stdlib.h>

typedef struct tree{
  struct tree* left;
  int data;
  struct tree* right;
}t;

t* insertNode(t* root, t* tree_node) {

  if(root == NULL) return tree_node;

  if(root->data > tree_node->data) root->left = insertNode(root->left, tree_node);

  else root->right = insertNode(root->right, tree_node);

  return root;

}

void display(t* root) {

  if(root == NULL)  return;

  display(root->left);

  printf("%d, ",root->data);

  display(root->right);
}

int main() {
  int ch;
  t* root = NULL;
  do {

    printf("enter data: ");

    t *tree_node = (t*)malloc(sizeof(t));

    tree_node -> left = tree_node -> right = NULL;

    scanf("%d",&tree_node->data);

    root = insertNode(root, tree_node);

    display(root);

    printf("\n");

    printf("enter 1: to exit: ");

    scanf("%d", &ch);
  }while(ch != 1);
  return 0;

}