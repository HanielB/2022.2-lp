#include "stdio.h"

void swap(int x, int y)
{
  int aux = x;
  x = y;
  y = aux;
}

void actualSwap(int& x, int& y)
{
  int aux = x;
  x = y;
  y = aux;
}


int main()
{
  int a = 2;
  int b = 3;
  printf("%d, %d\n", a, b);
  /* swap(a, b); */
  actualSwap(a, b);
  printf("%d, %d\n", a, b);
}
