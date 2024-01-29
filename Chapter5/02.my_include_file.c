#include <stdio.h>
#include "include/factorial.h"

int main() {
  printf("3! = %d\n", Factorial(3));
  printf("10! = %d\n", FactorialByIteration(10));
  return 0;
}