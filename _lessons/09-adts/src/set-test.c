#include <stdio.h>

#include "set.h"

int main()
{
  set s;
  printf("Create set\n");
  new (&s);
  printf("Add 2\n");
  add(&s, 2);
  printf("Add 3\n");
  add(&s, 3);
  printf("Add 5\n");
  add(&s, 5);
  printf("Contains %d? %d\n", 1, contains(&s, 1));
  printf("Contains %d? %d\n", 2, contains(&s, 2));
  printf("Contains %d? %d\n", 3, contains(&s, 3));
  printf("Contains %d? %d\n", 4, contains(&s, 4));
  printf("Contains %d? %d\n", 5, contains(&s, 5));
  printf("Delete 5\n");
  del(&s, 5);
  printf("Contains %d? %d\n", 5, contains(&s, 5));
  printf("Elements = %d\n", s.size);
}
