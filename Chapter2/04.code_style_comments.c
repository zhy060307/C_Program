//
// Created by Zhao, Haiyang (Ocean) on 2023/10/11.
//
#include <stdio.h>

/**
 * This program calculate summary from 0 to 9.
 * @param argc parameter count
 * @param argv parameters
 * @return
 */
int main(int argc, char **argv) {
  int sum = 0;
  int i = 0;
  while (i < 10) {
    sum = sum + i;
    i++;
  }
  printf("%d\n", sum);
  return 0;
}
