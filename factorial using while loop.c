//factorial using while loop
#include<stdio.h>
int fact(int num){
    int i=1,fact=1;
    while(i<=num){
      fact*=i;
      i++;
  }
  return fact;
}
int main()
{
 int i,num,factorial=1;
 printf("Enter a whole number to find Factorial = ");
 scanf("%d",&num);
  printf("Factorial of %d is: %d",num,fact(num));
return 0;
}

