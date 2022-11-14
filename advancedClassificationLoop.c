#include "NumClass.h"

int isPalindrome(int num)
{
    int num_length = floor(log10(abs(num)))+1;
    
    int num_array[num_length];
    for (int i = num_length-1 ; i>=0; i--)
    {
        num_array[i] = num%10;
        num = num/10;
    }
    int j = num_length-1;
    for(int i = 0; i<num_length && j>i; i++)
    {
        if(num_array[i]!=num_array[j])
        {
            return 0;
        }
        j--;
    }
    return 1;
    
}

int isArmstrong(int num)
{
    int num_length = floor(log10(abs(num)))+1;
    int temp = num;
    int num_array[num_length];
    for (int i = num_length-1; i>=0; i--)
    {
        num_array[i] = temp%10;
        temp = temp/10;
    }
    int sum = 0;
    for (int i = 0; i < num_length; i++)
    {
        sum += pow((double)num_array[i],num_length);
    }
    if(sum!=num)
    {
        return 0;
    }
    return 1;
}

