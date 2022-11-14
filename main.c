#include "NumClass.h"

int main()
{
    int min,max;
    scanf("%d",&min);
    scanf("%d",&max);
    printf("The Armstrong numbers are:");
    for (int i = min; i <= max; i++)
    {
        if(isArmstrong(i))
        {
            printf(" %d",i);
        }
    }
    printf("\n");
    printf("The Palindromes are:");
    for (int i = min; i <= max; i++)
    {
        if(isPalindrome(i))
        {
            printf(" %d",i);
        }
    }
     printf("\n");
    printf("The Prime numbers are:");
    for (int i = min; i <= max; i++)
    {
        if(isPrime(i))
        {
            printf(" %d",i);
        }
    }
     printf("\n");
    printf("The Strong numbers are:");
    for (int i = min; i <= max; i++)
    {
        if(isStrong(i))
        {
            printf(" %d",i);
        }
    }   
    printf("\n");

}