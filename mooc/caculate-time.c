#include<stdio.h>
int main()
{
    int hour1,minute1;
    int hour2,minute2;
    scanf("%d,%d",&hour1,&minute1);
    scanf("%d %d",&hour2,&minute2);//scanf""的部分必须按所给的格式输入，否则不会是我们想要的结果。
    int t1 = hour1 * 60 + minute1;
    int t2 = hour2 * 60 + minute2;
    int t = t2 - t1;
    printf("两者的时间差为%d时%d分\n",t/60,t%60);
    return 0;
}