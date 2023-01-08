//5.	Write a program to check whether two given numbers are co-prime numbers or not


#include<stdio.h>
int main()
{
    int x,y,H;
    printf("enter two number:");
    scanf("%d %d",&x,&y);

    for(H=x<y?x:y;H>=1;H--)
    if(x%H==0 && y%H==0)
    break;

        {
            printf("HCF is %d \n\n",H);
        
        }
    
        {
            if(H==1)
         printf("yes co-prime");
         else
         printf("no co-prime");
        }

    return 0;
}