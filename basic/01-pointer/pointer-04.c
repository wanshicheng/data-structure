#include<stdio.h>

void Change_Array(int *p)
{
    p[0] = -1; // p[0] == *p   p[2]==*(p+2)==*(a+2)==a[2]
}

int main()
{
    int a[5] = {1, 2, 3, 4, 5}; //һά�������Ǹ�ָ�볣����һά�����������һ��Ԫ�صĵ�ַ

    printf("%d\n", a);
    printf("%d\n", *a);
    printf("%d\n", a+1);
    printf("%d\n", *(a+1));
    printf("%d\n", *(a+10));
    Change_Array(a);
    printf("%d\n", a[0]);

    return 0;
}