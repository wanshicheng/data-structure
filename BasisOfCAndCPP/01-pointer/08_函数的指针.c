#include <stdio.h>
void foo( void )
{
    printf("date: %s\n", __DATE__ );
}
int main()
{
    void (*p)( void ) ;
     
    p=foo ; //ָ��ĳ������
    p();//���÷���1
    (*p)(); //���÷���2
    foo();
}