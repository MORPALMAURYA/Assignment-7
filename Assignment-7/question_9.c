//9.	Write a program to check whether a given number is an Armstrong number or not


#include <stdio.h>

int main() 
{
  int n, temp, sum = 0, digits = 0;
  printf("Enter a number: ");
  scanf("%d", &n);

  temp = n;
  while (temp != 0) 
  {
    digits++;
    temp /= 10;
  }

  temp = n;
  while (temp != 0) 
  {
    int digit = temp % 10;
    sum += (digit, digits);
    temp /= 10;
  }

  if (sum == n) 
  {
    printf("%d is armstrong number.\n", n);
  } 
  else 
  {
    printf("%d is not an Armstrong number.\n", n);
  }
  return 0;
}