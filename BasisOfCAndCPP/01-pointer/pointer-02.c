#include<stdio.h>

int main()
{
    int i = 10;
    int *p = &i;
    printf("%d\n", p); // p�����ַ������p������i�ĵ�ַ
    printf("%d\n", *p); // *p��ʾpָ�������
    printf("%d\n", i);
    *p = 100;
    printf("%d\n", i);
    p = i;
    printf("%d\n", p);
    // printf("%d\n", *p); //��һ��δ�������ĵ�ֱַ�ӽ��з��ʵ�Ȼ����������
    
    return 0;
}