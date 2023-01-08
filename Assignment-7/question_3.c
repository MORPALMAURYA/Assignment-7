// 3.	Write a program to check whether a given number is there in the Fibonacci series or not.

#include<stdio.h>
void main()
{
    int f1,f2,f3,n;
    printf("fabanacci number :\n");
    scanf("%d",&n);
    f1=0;
    f2=1;
    if(n==0)
    printf("fibanacii number");
    f3=f1+f2;
    while(f3<n)
    {
      f1=f2;
      f2=f3;
      f3=f1+f2;
    }
      
      if(f3==n)
      printf("yes fibanacci number");
      else
      printf("not a fibanacci number");
    
}