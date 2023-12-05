//
// Created by Zhao, Haiyang (Ocean) on 2023/12/5.
//
#include <stdio.h>
#include <stdarg.h>

void HandleVarargs(int arg_count, ...) {
  // 1. ���� va_list ���ڻ�ȡ���Ǳ䳤����
  va_list args;

  // 2. ��ʼ����
  va_start(args, arg_count);
  for (int i = 0; i < arg_count; i++) {

    // 3. ȡ����Ӧ������(va_list, type)
    int arg = va_arg(args, int);
    printf("%d: %d\n", i, arg);
  }

  // 4.��������
  va_end(args);

}

int main(void) {
  printf("Hello World !!!\n");
  HandleVarargs(3, 8, 13, 6);
  return 0;
}
