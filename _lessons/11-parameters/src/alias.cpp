#include <stdio.h>

void sigsum(int& n, int& ans)
{
  // with aliasing, this will simultaneously assign n to 0 as well
  ans = 0;
  int i = 1;
  while (i <= n)
  {
    ans += i;
    i++;
  }
}

int main()
{
  int x = 10;
  int y;
  sigsum(x, y);
  printf("x = %d, y = %d\n", x, y);
  x = 10;
  sigsum(x, x);
  printf("x = %d, y = %d\n", x, x);
  return 0;
}
