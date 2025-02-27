#include<stdio.h>
#include<stdlib.h>

typedef struct node {
  int data;
  struct node *next;
}sl;

sl* insertNode(sl* head, int val) {

  sl* temp = (sl*)malloc(sizeof(sl));
  temp -> data = val;
  temp -> next = NULL;

  // If linked list is empty
  if(head == NULL) return temp;

  // If the node is the smallest node then head insertion

  if(head -> data > temp -> data) {
    temp -> next = head;
    return temp;
  }

  // insert node in between

  sl* prev = NULL, *ptr = head;
  while(ptr != NULL) {
    if(ptr -> data > temp -> data) {
      prev -> next = temp;
      temp -> next = ptr;
      return head;
    }
    prev = ptr;
    ptr = ptr -> next;
  }

  // if the loop above doesnot return head, that means the node is the largest node
  // tail insertion

  prev -> next = temp;
  return head;

}

sl* createLL() {
  sl* head = NULL;
  int data;
  while(1) {
    printf("enter data or -1 to terminate: ");
    scanf("%d",&data);
    if(data == -1)  break;
    head = insertNode(head, data);
  }
  return head;
}

void displayLL(sl *head) {
  if(head == NULL)  printf("Empty LInked list\n");
  else {
    while(head) {
      printf("%d, ", head -> data);
      head = head -> next;
    }
    printf("\n");
  }
}

void main() {
  sl* head = NULL;
  head = createLL();
  printf("linked list is: ");
  displayLL(head);
}