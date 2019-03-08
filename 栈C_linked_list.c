// C program for linked list implementation of stack 
#include <stdio.h> 
#include <stdlib.h> 
#include <limits.h> 
  
// A structure to represent a stack 
struct StackNode 
{ 
    int data; 
    struct StackNode* next; 
}; 
  
  
int isEmpty(struct StackNode *root) 
{ 
    return !root; 
} 
/*
struct StackNode* newNode(int data) 
{ 
    struct StackNode* stackNode = 
              (struct StackNode*) malloc(sizeof(struct StackNode)); 
    stackNode->data = data; 
    stackNode->next = NULL; 
    return stackNode; 
} 
  
  
void push(struct StackNode** root, int data) 
{ 
    struct StackNode* stackNode = newNode(data); 
    stackNode->next = *root; 
    *root = stackNode; 
    printf("%d pushed to stack\n", data); 
} 
  */
  
  /* Given a reference (pointer to pointer) to the head of a list 
   and an int, inserts a new node on the front of the list. */
void push(struct StackNode** head_ref, int new_data) 
{ 
    struct StackNode* new_node = (struct StackNode*) malloc(sizeof(struct StackNode)); 
    new_node->data  = new_data; 
    new_node->next = (*head_ref); 
    (*head_ref)    = new_node; 
    printf("%d pushed to stack\n", new_data); 
} 
  
int pop(struct StackNode** root) 
{ 
    if (isEmpty(*root)) 
        return INT_MIN; 
    struct StackNode* temp = *root;
    
    *root = (*root)->next; 
    int popped = temp->data; 
    free(temp); 
  
    return popped; 
} 
  
int peek(struct StackNode* root) 
{ 
    if (isEmpty(root)) 
        return INT_MIN; 
    return root->data; 
} 
  
int main() 
{ 
    struct StackNode* root = NULL; 
  
    push(&root, 10); 
    push(&root, 20); 
    push(&root, 30); 
  
    printf("%d popped from stack\n", pop(&root)); 
  
    printf("Top element is %d\n", peek(root)); 
  
    return 0; 
} 


