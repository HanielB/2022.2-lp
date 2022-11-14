#include <stdarg.h>
#include <stdio.h>

int foo(size_t nargs, ...)
{
  int sum = 0;
  va_list ap;
  /* initializes variable list with given number of arguments */
  va_start(ap, nargs);
  for (int i = 0; i < nargs; ++i)
  {
    /* get next argument */
    sum += va_arg(ap, int);
  }
  /* clean up. Forgetting this may or may not be harmless, depends on the
     implementation of va_*. As good practice there should always be a va_end
     after a va_start.. */
  va_end(ap);
  return sum;
}

int main()
{
  /* 0 */
  printf("%d\n", foo(0));
  /* 5 */
  printf("%d\n", foo(1, 5));
  /* 5 + 7 */
  printf("%d\n", foo(2, 5, 7));
  /* 5 + 7 + 9 */
  printf("%d\n", foo(3, 5, 7, 9));
  /* last argument will be ignored */
  printf("%d\n", foo(3, 5, 7, 9, 11));
  printf("%d\n", foo(4, 5, 7, 9, "b"));
  /* random stuff will be read */
  printf("%d\n", foo(10, 5, 7, 9, 11));

  /* printf is itself a variadic function. The number of arguments is determined
     by the first argument, which says how many arguments are needed to
     evaluate */
  printf("%d\n", 0);
  /* compiler will flag missing arguments */
/*   printf("%d %d\n", 0); */
/*   /\* compiler will flag too many arguments *\/ */
/*   printf("%d %d\n", 0, 1, 2); */
}
