#include "stdio.h"

void swap(int x, int y)
{
  int aux = x;
  x = y;
  y = aux;
}

void actualSwap(int* x, int* y)
{
  int aux = *x;
  *x = *y;
  *y = aux;
}

#define SWAP(X, Y)  \
  {                 \
    int tmp = X;    \
    X = Y;          \
    Y = tmp;        \
  }

int x = 0;
int foo(){
  x++;
  return 1;
}
int z = 1;
int bar(){
  return z++;
}

int main()
{
  int a = 2;
  int tmp = 15;
  printf("Before: %d, %d\n", a, tmp);
  SWAP(a, tmp);
  printf("After: %d, %d\n", a, tmp);
}

#define MAX(X, Y) ((X) > (Y) ? (X) : (Y))

int main(){
  int y = MAX(0, foo());
  printf("Max: %d, global x: %d\n", y, x);

  int y = MAX(bar, foo());
  printf("Max: %d, global x, z: %d, %d\n", y, x, z);

  y = MAX(bar, foo());
  printf("Max: %d, global x, z: %d, %d\n", y, x, z);
}
