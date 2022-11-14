#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void giveMeAStringByRef(char*& s)
{
  s = (char*)malloc(4 * sizeof(char));
  strcpy(s, "Oi!");
}

static void giveMeAStringByValue(char* s)
{
  s = (char*)malloc(4 * sizeof(char));
  strcpy(s, "Oi!");
}

int main()
{
  char* s1 = NULL;
  char* s2 = NULL;
  giveMeAStringByRef(s1);
  // s1 will have the value given to the formal parameter of the function
  printf("%s\n", s1);
  // s2 will still be null, as it was not passed by reference
  giveMeAStringByValue(s2);
  printf("%s\n", s2);
}
