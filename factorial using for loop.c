#include<stdio.h>
int main()
{
 int i,num,factorial=1;
 printf("Enter a whole number to find Factorial = ");
 scanf("%d",&num);
 for(i=1;i<=num;i++){
      factorial=factorial*i;
  }
  printf("Factorial of %d is: %d",num,factorial);
return 0;
}
