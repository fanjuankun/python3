#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c;
    printf("请输入一元二次方程的三个系数，用逗号隔开:\n");
    scanf("%d,%d,%d",&a,&b,&c);
    if(pow(b,2)-4*a*c<0)
    {
        printf("该方程无实数解！\n");
    }
    else if(b*b-4*a*c==0)
    {
        printf("该方程有两个相等的实数根，x1=x2=%lf\n",((-b+sqrt(pow(b,2)-4*a*c)/2*a)));
    }
    else 
    {  
        printf("该方程有两个不同的实数根，分别是x1=%lf,x2=%lf\n",((-b+sqrt(pow(b,2)-4*a*c)/2*a),((-b-sqrt(pow(b,2)-4*a*c)/2*a))));
    }
}