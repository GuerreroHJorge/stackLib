#include <stdio.h>
#include "stackLib.h"

int main(void) {
  
  Pila *pila = newStack();

  push(pila,"gato");
  push(pila,"perro");
  push(pila, "hola");
  pop(pila);

  printStack(pila);
  
  return 0;
}
