#include <stdio.h>
int cuadrado(int a);
void cuadradoVoid(int *a);
void mostrarVariable(int *a);
void invertir(int *a, int *b);
void orden(int *a, int *b);

int main()
{
  int num1, num2;
  puts("Ingrese dos numeros: ");
  scanf("%d %d", &num1, &num2);

  printf("Cuadrado de %d: %d", num1, cuadrado(num1));
  cuadradoVoid(&num1);

  mostrarVariable(&num1);
  mostrarVariable(&num2);

  invertir(&num1, &num2);
  printf("VARIABLES INVERTIDAS");
  mostrarVariable(&num1);
  mostrarVariable(&num2);

  orden(&num1, &num2);
  printf("VARIABLES ORDENADAS");
  mostrarVariable(&num1);
  mostrarVariable(&num2);
}

int cuadrado(int a)
{
  return a * a;
}
void cuadradoVoid(int *a)
{
  *a = *a * *a;
}
void mostrarVariable(int *a)
{
  printf("\nDireccion de la variable: %p \t Contenido: %d\n", a, *a);
}
void invertir(int *a, int *b)
{
  int aux = *a;
  *a = *b;
  *b = aux;
}

void orden(int *a, int *b)
{
  if (*a > *b)
  {
    int aux = *a;
    *a = *b;
    *b = aux;
  }
}