//Write a program to find the position of first 1 in LSB

#include <stdio.h>

int main() 
{
    int number;
    printf("Enter a number:\n ");
    scanf("%d", &number);
    int position = 0;
    while ((number & 1) == 0) 
    {
        position++;
        number = number >> 1;
    }

    printf("The position of the first 1 in the LSB is %d\n\n", position);
    return 0;
}