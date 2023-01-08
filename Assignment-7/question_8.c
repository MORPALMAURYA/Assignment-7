#include<stdio.h>
int main()
{
    int i,n,flag,num;
    printf("enter a number\n");
    scanf("%d",&num);
    for(n=num;n<=100;n++)
    {
        flag=0;
        for(i=2;i<=n/2;i++)
        {
            if(n%i==0)
            {
                flag++;
                break;
            }
        }

        if(flag==0 && n !=1)
        {
            printf("%d\n",n);
            break;
        }
    }

   return 0;

}