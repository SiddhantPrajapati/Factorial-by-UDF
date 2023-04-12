//WAP to find factorial using recursion.
#include<stdio.h>
int fact(int);
void main()
{
    int n;
    printf("enter the whose want to find factorial:");
    scanf("%d",&n);
    fact(n);
    printf("factorial %d :",fact(n));
}
int fact(int n)
{
    if(n==0)
    return 1;
    else if(n==1)
        return 1;
    else
        return n*fact(n-1);
}

