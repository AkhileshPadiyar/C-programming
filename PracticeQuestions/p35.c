#include<stdio.h>
#include<stdlib.h>

typedef struct tree_node {
  int data;
  struct tree_node *left;
  struct tree_node *right;
}tn;


tn* insertNode(tn* root, int val) {

  if(root == NULL) {
    tn* temp = (tn*)malloc(sizeof(tn));
    temp -> data = val;
    temp -> left = NULL;
    temp -> right = NULL;
    return temp;
  }

  if(root -> data > val)
    root -> left = insertNode(root -> left, val);
  else
    root -> right = insertNode(root -> right, val);
  
  return root;

}

tn* createBST() {
  tn* root = NULL;
  int data;
  while(1) {
    printf("enter data or -1 to terminate: ");
    scanf("%d",&data);
    if(data == -1) break;
    root = insertNode(root, data);
  }
  return root;
}

void inorder(tn* root) {
  if(root == NULL)  return;
  inorder(root -> left);
  printf("%d, ", root -> data);
  inorder(root -> right);
}

void solve(tn* bst, int arr[], int *c) {
  if(bst == NULL) return;
  arr[*c] = bst -> data;
  *c = (*c) + 1;
  solve(bst -> left, arr, c);
  solve(bst -> right, arr, c);
}

void printArr(int arr[], int count) {
  for(int i = 0; i < count; i++) {
    printf("%d, ", arr[i]);
  }
  printf("\n");
}



void main() {

  tn* root = NULL;
  root = createBST();
  printf("Inorder of tree is: ");
  inorder(root);
  printf("\n");

  int leftNode[50], rightNode[50];
  int n1 = 0, n2 = 1;
  rightNode[0] = root -> data;

  printf("Nodes in left half are: ");
  solve(root -> left, leftNode, &n1);
  printArr(leftNode, n1);

  printf("Nodes in right half are: ");
  solve(root -> right, rightNode, &n2);
  printArr(rightNode, n2);

}