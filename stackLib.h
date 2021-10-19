#ifndef STACKLIB_STACKLIB_H
#define STACKLIB_STACKLIB_H

typedef struct node Stack;
typedef struct pila Pila;

typedef void* TYPE;

void push(Pila* pila, void* value);
void* pop(Pila* pila);
void* peek(Pila* pila);

void printStack(Pila* stack);
Stack* newStack();

#endif

