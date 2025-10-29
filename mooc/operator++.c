#include<stdio.h>
int main()
{
    int a = 5;
    printf("a++=%d\n",a++);
    printf("a = %d\n",a);//不管是++a还是a++，都相当于附作用，只不过a++的值是+1以前的值，而++a是+1以后的值。
    printf("++a=%d\n",++a);
    printf("a = %d\n",a);
    return 0;
}