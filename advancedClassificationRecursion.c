#include "NumClass.h"

int isArmstrongR(int num,int numLength)
{   
    if(num<10)
    {
        return pow(num%10,numLength);
    }
    
    return pow(num%10,numLength)+isArmstrongR(num/10,numLength);
}

int isArmstrong(int num)
{
    int num_length = floor(log10(abs(num)))+1;
    if(isArmstrongR(num,num_length)==num)
    {
        return 1;
    }
    return 0;
}

int isPalindromeR(int num,int numLength)
{
    if(numLength<1)
    {
        return 1;
    }
    int ans = num/(int)pow(10,numLength)== num%10? 1 : 0;
    return ans*isPalindromeR((num%(int)pow(10,numLength))/10,numLength-2);
}

int isPalindrome(int num)
{
    return isPalindromeR(num,floor(log10(abs(num))));
}
 

