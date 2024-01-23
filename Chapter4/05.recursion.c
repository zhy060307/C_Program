//
// Created by Zhao, Haiyang (Ocean) on 2023/12/5.
//
#include <stdio.h>
#include <stdarg.h>

//阶乘
unsigned int Factorial(unsigned int n) {
  if (n == 0) {
    return 1;  // f(0) = 1
  } else {
    return Factorial(n - 1) * n;
  }
}

//阶乘的迭代实现
unsigned int FactorialByIteration(unsigned int n) {
  unsigned int result = 1;
  for (unsigned int i = n; i > 0; i--) {
    result *= i;
  }
  return result;
}

//斐波那契数列
unsigned int Fibonacci(unsigned int n) {
  if (n == 0 || n == 1) {
    return n;  // f(0) = 0, f(1) = 1
  } else {
    return Fibonacci(n - 1) + Fibonacci(n - 2);
  }
}

//斐波那契数列的迭代实现
unsigned int FibonacciByIteration(unsigned int n) {
  if (n <= 1) {
    return n;
  }
  int last = 0;
  int current = 1;
  for (int i = 0; i <= n - 2; ++i) {
    int temp = current;
    current += last;
    last = temp;
  }
  return current;

}

int main(int argc, char **argv) {
  printf("3! = %d\n", Factorial(3));
  printf("5! = %d\n", Factorial(5));
  printf("10! = %d\n", Factorial(10));
  printf("10! = %d\n", FactorialByIteration(10));

  printf("f3 = %d\n", Fibonacci(3));
  printf("f5 = %d\n", Fibonacci(5));
  printf("f10 = %d\n", Fibonacci(10));
  printf("f10 = %d\n", FibonacciByIteration(10));
  return 0;
}
