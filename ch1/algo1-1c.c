#include"c1.h"

void fa(int a)
{
    a++;
    printf("�ں���fa�У�a = %d\n", a);
}

void fb(int *a)
{   
    *a += 1;
    printf("�ں���fb�У�a = %d\n", *a);
}

int main()
{
    int n = 1;
    printf("���������У����ú���fa֮ǰ��n = %d\n", n);
    fa(n);
    printf("���������У����ú���fa֮�󣬵��ú���fb֮ǰ��n = %d\n", n);
    fb(&n);
    printf("���������У����ú���fb֮��n = %d\n", n);
}