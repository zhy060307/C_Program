//
// Created by Zhao, Haiyang (Ocean) on 2023/11/21.
//
#include <stdio.h>

void EmptyParamList(void);

/*
 * 1. ������
 * 2. ��������ֵ���ͣ����ûд��Ĭ��Ϊ int
 * 3. ���������б��������ͣ��Ͳ�����˳�򣬲����β�������Ҫ
 */
int Add(int, int);

int main(void) {
  puts("");
  EmptyParamList();

  int result = Add(1, 2);
  printf("result of add: %d\n", result);
  return 0;
}

void EmptyParamList(void) {
  puts("Hello");
}

int Add(int a, int b) {
  return a + b;
}