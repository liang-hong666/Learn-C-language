#include<stdio.h>
int main()
{   int a;
    a = 5;
    printf("sizeof(int)=%ld\n",sizeof(int));
    printf("sizeof(double)=%ld\n",sizeof(double));
    printf("sizeof(long double)=%ld\n",sizeof(long double));
    printf("sizeof(long long)=%ld\n",sizeof(long long));
    printf("sizeof(a++)=%ld\n",sizeof(a++));
    printf("a=%d\n",a); //sizeof不会对括号内的内容进行运算，其值在编译前已经确定了
    printf("sizeof(a+1)=%ld\n",sizeof(a+1));
    printf("sizeof(a+1.0)=%ld\n",sizeof(a+1.0)); //因为1.0是浮点数，故sizeof(a+1.0)=8
    return 0;
}
