#include <stdio.h>

void f1(int i) {
  i = 10;
  printf("�� f1 �� i ��ֵ�� %d\n", i);
}

void f2(int *i) {
  *i = 10;
  printf("�� f2 �� i ��ֵ�� %d\n", i);
  printf("�� f2 �� *i ��ֵ�� %d\n", *i);
}

int main() {
  int i = 1;
  f1(i);
  printf("�� main �� i ��ֵ�� %d\n", i);
  f2(&i);
  printf("�� main �� i ��ֵ�� %d\n", i);

  return 0;
}