#include <malloc.h>
#include <stdio.h>

int main() {
  int a[5] = {1, 2, 3, 4, 5}; // ���鳤�ȹ̶�
  int len;
  printf("������Ҫ���������ĳ��ȣ�len=");
  scanf("%d", &len);

  int *pArr =
      (int *)malloc(sizeof(int) * len); // ǿ��ת����malloc() ���ص�һ���ֽڵ�ַ
  *pArr = 9;
  pArr[1] = 3;
  int i;
  for (i = 0; i < len; ++i) {
    printf("a[%d] = %d\n", i, *(pArr + i));
  }

  free(pArr);

  return 0;
}