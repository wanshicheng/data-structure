#include <stdio.h>
 
int main ()
{
   int i = 1;
   int & r = i;
   int * p1 = &r; // c++��ָ�������ǰ��ʼ��
   int * p2 = &i;

  
   printf("%d\n", r);
   printf("%d\n", &r);
   printf("p1 ��ָ��ĵ�ַΪ %d\n", p1);
   printf("p1 ��ֵΪ %d\n", *p1);
   printf("%d\n", p2);
   printf("%d\n", i);
   r = r + 1;
   printf("%d\n", i);

   return 0;
}