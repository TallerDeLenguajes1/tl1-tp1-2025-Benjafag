#include <stdio.h>

int numero = 15;
int *puntero = &numero;

int main()
{
  printf("Hola mundo\n");
  printf("Contenido del puntero: %d\n", *puntero);                                 // 1
  printf("Direccion de memoria almacenada por el puntero: %p\n", puntero);         // 2
  printf("Direccion de memoria de la variable: %p\n", &numero);                    // 3
  printf("Direccion de memoria del puntero: %p\n", &puntero);                      // 4
  printf("Memoria usada por la variable \"numero\": %zu bytes\n", sizeof(numero)); // 5
}
