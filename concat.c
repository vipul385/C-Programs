#include <stdio.h>
int main() {
  char s1[100], s2[100];
  printf("enter string\n");
  gets(s1);             //input string one
  printf("enter string\n");
  gets(s2);             //input string two
  int length, j;
  length = 0;
  while (s1[length] != '\0') {
    ++length;           //length increment
  }

  for (j = 0; s2[j] != '\0'; ++j, ++length) {
    s1[length] = s2[j];
  }

  s1[length] = '\0';

  printf("After concatenation: ");
  puts(s1);              //print after concaenation

  return 0;
}
