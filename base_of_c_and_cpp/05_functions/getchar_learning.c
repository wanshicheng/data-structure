#include <stdio.h>

int main ()
{
    char c;

    printf("�������ַ���");
    c = getchar();

    printf("������ַ���");
    putchar(c);
    printf("\n");
    printf("������ַ���%c\n", c);
    c = getchar();
    printf("������ַ���%c\n", c);

    return(0);
}