#include <stdio.h>

int main() {
  int *p; // p�Ǹ��������֣�int *��ʾ��p����ֻ�ܴ洢int���ͱ�����ַ��Ҳ��p������
  int i = 10;

  printf("%p\n", p); // ��ʮ���������
  printf("%d\n", p);
  printf("%d\n", *p);
  printf("%d\n", i);

  return 0;
}