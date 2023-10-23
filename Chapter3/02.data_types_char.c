#include <stdio.h>
#include <limits.h>
#include <locale.h>

int main() {
  //�ַ��� ASCII 127
  char a = 'a'; //97
  char char_1 = '1';// 49
  char char_0 = '0';// 48

  char i = 0; // \0,NULL

  // ������ literal
  // \n : newline
  // \b : backspace
  // \r : return
  // \t : table
  // \' : ' �ַ�������
  // \" : " �ַ���������

  char char_1_escape_oct = '\61';    //49�İ˽���
  char char_1_escape_hex = '\x31';   //49��16����
  char newline = '\n';

  printf("char a: %d\n", a);
  printf("char 1: %d\n", char_1);
  printf("char 'i': %d\n", i);

  //��ӡ �ַ�
  printf("char 1: %c\n", char_1);
  printf("char 1: %c\n", char_1_escape_oct);
  printf("char 1: %c\n", char_1_escape_hex);

  //Unicode CJK(���պ�) Code Point.
  //C95
  wchar_t zhong = L'��';
  wchar_t zhong_hex = L'\u4E2D';
  printf("��: %d\n", zhong);
  printf("��: %d\n", zhong_hex);

  setlocale(LC_ALL, "chs");
  wprintf(L"�У�%1c", zhong);

  // �ַ���
  char *string = "��";

  return 0;
}
