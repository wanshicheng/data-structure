// ��������Ϊ����ֵ
#include <stdio.h>

float a[] = {1.1, 2.2, 3.3, 4.4, 5.5};

float &setValue(int i) {
  return a[i]; // ���ص� i ��Ԫ�ص�����
}

// Ҫ�������涨�庯����������
int main() {
  printf("�ı�ǰ��ֵ\n");
  for (int i = 0; i < 5; i++) {
    printf("a[%d] = %f\n", i, a[i]);
  }
  setValue(1) = 10;
  float &x = setValue(3);
  x = 100;

  printf("�ı���ֵ\n");
  for (int i = 0; i < 5; i++) {
    printf("a[%d] = %f\n", i, a[i]);
  }

  return 0;
}

// ������һ������ʱ��Ҫע�ⱻ���õĶ����ܳ������������Է���һ���Ծֲ������������ǲ��Ϸ��ģ����ǣ����Է���һ���Ծ�̬���������á�
int &func() {
  int q;
  //! return q; // �ڱ���ʱ��������
  static int x;
  return x; // ��ȫ��x �ں�������������Ȼ����Ч��
}