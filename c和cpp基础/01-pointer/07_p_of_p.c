/**
 * ָ���ָ��
 **/
#include <stdio.h>

int main() {
  int i;
  int *pInt;
  int **ppInt;

  i = 100;

  /* ��ȡ var �ĵ�ַ */
  pInt = &i;

  /* ʹ������� & ��ȡ ptr �ĵ�ַ */
  ppInt = &pInt;

  /* ʹ�� pptr ��ȡֵ */
  printf("i ��ֵΪ %d\n", i);
  printf("*pInt ��ֵΪ %d\n", *pInt);
  printf("**ppInt ��ֵΪ %d\n", **ppInt);

  return 0;
}