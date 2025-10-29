//运行某一个程序请将另一个注释掉，规定：一个程序不能有两个主函数。

/*理解运算符的优先级：交换两个数的值的错误写法*/

#include<stdio.h>
int main()
{
    int a = 5;
    int b = 6;
    b = a;
    a = b;
    printf("输出a=%d,b=%d\n",a,b);
    return 0;
}

/*正确写法：需要引入一个中间变量*/
#include<stdio.h>
int main()
{
    int a = 5;
    int b = 6;
    int t;
    t = a;
    a = b;
    b = t;
    printf("输出a=%d b=%d\n",a,b);
    return 0;
}