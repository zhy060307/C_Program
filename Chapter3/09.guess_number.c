//
// Created by Zhao, Haiyang (Ocean) on 2023/11/21.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  //1.random number
  //[0,0x7fff]
  srand(time(NULL));
  int magic_number = rand();
  printf("magic_number is %d\n", magic_number);
  //2.loop
  while (1) {
    int user_input;
    puts("Please input a number: ");
    scanf("%d", &user_input);
    if (user_input > magic_number) {
      puts("Your number is bigger");
    } else if (user_input < magic_number) {
      puts("Your number is smaller");
    } else {
      puts("Yes, you got it!");
      break;
    }
  }
  return 0;
}