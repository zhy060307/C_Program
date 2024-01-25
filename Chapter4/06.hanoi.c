//
// Created by Zhao, Haiyang (Ocean) on 2024/1/25.
//
#include <stdio.h>

/**
 * Tower of Hanoi ººÅµËþ
 * @param n  The count of plates.
 * @param src The source of the plates to move from.
 * @param dest The destination of the plates to move to.
 * @param tmp The temporary place to use.
 */
void Move(int n, char src, char dest, char tmp) {
  if (n == 0) {
    return;
  } else if (n == 1) {
    printf("%c=>%c\n", src, dest);
  } else {
    Move(n - 1, src, tmp, dest);
    Move(1, src, dest, tmp);
    Move(n - 1, tmp, dest, src);
  }
}

int main() {
  Move(3,'A','B','C');
  return 0;
}