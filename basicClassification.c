#include "NumClass.h"

int isPrime(int num)
{
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int factorial(int num)
{
    int ans = 1;
    for (int i = 1; i <= num; i++)
    {
        ans = ans * i;
    }
    return ans;
}

int isStrong(int num)
{
    int num_length = floor(log10(abs(num))) + 1;
    int temp = num;
    int num_array[num_length];
    for (int i = num_length - 1; i >= 0; i--)
    {
        num_array[i] = temp % 10;
        temp = temp / 10;
    }
    int sum = 0;
    for (int i = 0; i < num_length; i++)
    {
        sum += factorial(num_array[i]);
    }
    if (sum != num)
    {
        return 0;
    }

    return 1;
}
