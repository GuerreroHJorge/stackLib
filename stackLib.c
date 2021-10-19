#include "stackLib.h"
#include <stdio.h>
#include <stdlib.h>

struct node  {
  void* dato;
  struct node* next;

};

typedef struct node Stack;
typedef void* TYPE;

struct pila {
  Stack *top;
};

typedef struct pila Pila;

Stack* newStack(TYPE value){
  Stack* newHead = (Stack *) malloc(sizeof(Stack));
  newHead->dato = value;
  newHead->next = NULL;

  return newHead;
}

void push(Pila* pila, void* value){
  Stack *node = newStack(value);
  //stack = node;
  node->next = pila->top;
  pila->top = node;
  //stack->head = node;
}

void* pop(Pila* pila){
  void* valor = pila->top->dato;
  
  if(pila->top != NULL){
    Stack *delete = pila->top;
    pila->top = pila->top->next;
    delete->next = NULL;
    free(delete);
  }
  
  return valor;
}

void* peek(Pila*pila){
    void *valor = pila->top->dato;
    
    if(pila->top != NULL){
        return valor;       
    }
    else{
        return NULL;
    }   
}

void printStack(Pila* stack){
  
  while (stack->top != NULL){
    printf("%s\n", stack->top->dato);
    stack->top = stack->top->next;
   
  }
}
