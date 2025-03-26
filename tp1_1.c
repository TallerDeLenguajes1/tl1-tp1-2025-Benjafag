#include <stdio.h>

int numero = 15;
int *puntero = &numero;

int main()
{
  printf("Hola mundo\n");
  printf("Contenido del puntero: %d\n", *puntero);
  printf("Direccion de memoria almacenada por el puntero: %p\n", puntero);
  printf("Direccion de memoria de la variable: %p\n", &numero);
  printf("Direccion de memoria del puntero: %p\n", &puntero);
  printf("Memoria usada por la variable \"numero\": %zu bytes\n", sizeof(numero));
}
