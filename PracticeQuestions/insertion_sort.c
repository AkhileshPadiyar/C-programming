#include<stdio.h>
#include<stdlib.h>

typedef struct node {
  int data;
  struct node *next;
}sl;

sl* addNode(int data) {
  sl *temp = (sl*)malloc(sizeof(sl));
  temp -> data = data;
  temp -> next = NULL;
  return temp;
}

sl* createLL() {
  sl *head = NULL;
  sl *ptr = NULL;
  int data;
  while(1) {
    printf("Enter data or -1 to terminate: ");
    scanf("%d",&data);
    if(data == -1) break;
    if(head == NULL) {
      head = ptr = addNode(data);
    }
    else {
      ptr -> next = addNode(data);
      ptr = ptr -> next;
    }
  }
  return head;
}

void display(sl *head) {
  if(head == NULL) printf("Empty Linked list\n");
  else {
    printf("Data is : ");
    while(head) {
      printf("%d, ",head -> data);
      head = head -> next;
    }
    printf("\n");
  }
}

sl* deleteNodes(sl *head, int data) {
  if(head == NULL)  return head;
  sl *temp = deleteNodes(head -> next, data);
  if(head -> data > data) {
    return temp;
  }
  head -> next = temp;
  return head;
}

void main() {
  sl *head = createLL();
  display(head);
  printf("Enter data you want to delete: ");
  int data;
  scanf("%d",&data);
  head = deleteNodes(head, data);
  display(head);
}