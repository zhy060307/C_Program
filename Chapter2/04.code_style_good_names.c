//
// Created by Zhao, Haiyang (Ocean) on 2023/10/11.
//
#include <stdio.h>

int main() {
  int sum = 0;
  int i = 0;
  while (i < 10) {
    sum = sum + i;
    i++;
  }
  printf("%d\n", sum);
  return 0;
}
