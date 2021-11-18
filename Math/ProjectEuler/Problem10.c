/**
 * @file Problem10.c
 * @author kadrick (kbk2581553@gmail.com)
 * @brief Sieve of Eratosthenes
 * @version 0.1
 * @date 2021-11-18 16:01
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>
#include <memory.h>
#include <math.h>

#define true 1
#define false 0

#define MAX 2000001

int isPrime[MAX];
long long sum;

int main(void)
{
    for (int i = 0; i < MAX; i++)
        isPrime[i] = true;

    for (int i = 2; i <= sqrt(MAX); i++)
    {
        if (!isPrime[i])
            continue;
        for (int j = 2; i * j < MAX; j++)
            isPrime[i * j] = false;
    }

    for (int i = 2; i < MAX; i++)
        if (isPrime[i])
            sum += i;

    printf("%lld\n", sum);

    return 0;
}