//make factorial using recursion
#include<stdio.h>
int fac(int);
void main()
{
int a;
printf("enter the number=");
scanf("%d",&a);
printf("factorial=%d",fac(a));
}
int fac(int x)
{
    if(x==0 || x==1)
        return 1;
    else {
    return x*fac(x-1);
    }
}

