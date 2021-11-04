/**
 * > file: Problem7.c
 * > author: Kadrick / Bo Gwon Kang (kbk2581553@gmail.com)
 * > date: 2021-11-04 04:00 
 * > description: prime
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

int main(void) {

    int cnt = 0;

    for (int i = 2; cnt < 10001; i++)
    {
        if (isPrime(i))
            cnt++;
        if (cnt == 10001)
            printf("%d\n", i);
    }

    return 0;
}