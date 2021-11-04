/**
 * > file: Problem3.c
 * > author: Kadrick / Bo Gwon Kang (kbk2581553@gmail.com)
 * > date: 2021-11-04 03:07 
 * > description: Factorization
 * @copyright Copyright (c) 2021
 */
#include <stdio.h>
#include <math.h>

/**
 * > description: check n is Prime
 * 
 * @param n 
 * @return int 
 */
int isPrime(long long n)
{
    for (long long i = 2; i <= (long long)sqrt(n); i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main(void)
{
    long long maxF = 0;
    long long input = 600851475143;

    for (long long i = 2; input != 1; i++)
    {
        if (isPrime(i))
        {
            while (input % i == 0)
            {
                input /= i;
                if (maxF < i)
                    maxF = i;
            }
        }
    }

    printf("%lld\n", maxF);

    return 0;
}