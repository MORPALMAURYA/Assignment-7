// Level up with loops
// Assignment-6
// Q.1	Write a program to find the Nth term of the Fibonnaci series.

#include<stdio.h>
int main()
{
    int a=0,b=1,c=0,num;
    printf("enter a number:");
    scanf("%d",&num);
    for(int i=2;i <= num ; i++)
    {
        c=a+b;
        a=b;
        b=c;
    }

    printf("The %d th fibonacci number is %d",num,b);
    return 0;
}