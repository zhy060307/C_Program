//
// Created by Zhao, Haiyang (Ocean) on 2023/11/22.
//
#include <stdio.h>

//file scope
int global_var = 1;

void LocalStaticVar(void) {
  // ��̬����
  // 1. ������ȫ�֣��ڴ治�������˳�������
  // 2. int ��ֵĬ��Ϊ 0
  static int static_var;
  int non_static_var;
  printf("static var :%d\n", static_var++);
  printf("non static var :%d\n", non_static_var++);
}

double Add(double a, double b);

void ClearMemory() {
  int eraser = -1;
}

// proto scope
//double Sort(int size, int array[size]);


void PassByMemory(int parameter) {
  printf("%d\n", parameter);
}

void PassByRegister(register int parameter) {
  printf("%d\n", parameter);
}

int main() {
  // �Զ�����
  auto int value = 0;
  {
    //block scope
    auto int a = 0;
    printf("%d\n", a);
  }
  //printf("%d\n", a);

  if (value > 0) {
    int is_value_equals_0 = 0, b = is_value_equals_0;
  }
    // is_value_equals_0 success
  else {

  }

  LocalStaticVar();
  ClearMemory();
  LocalStaticVar();
  ClearMemory();
  LocalStaticVar();
  return 0;
}