/**
 * > file: Problem5.c
 * > author: Kadrick / Bo Gwon Kang (kbk2581553@gmail.com)
 * > date: 2021-11-04 03:34 
 * > description: Factorization
 * @copyright Copyright (c) 2021
 */
#include <stdio.h>
#include <math.h>
#include <string.h>

/**
 * > description: check n is Prime
 * 
 * @param n 
 * @return int 
 */
int isPrime(int n)
{
    for (long long i = 2; i <= (long long)sqrt(n); i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main(void) {

    int ans[20];
    memset(ans, 0, sizeof(ans));
    int upperBound = 20;
    
    for (int i = 2; i <= upperBound; i++)
    {
        int target = i;
        int cnt[20];
        memset(cnt, 0, sizeof(cnt));
        for (int j = 2; target != 1; j++)
        {
            if(isPrime(j)) {
                while (target % j == 0)
                {
                    cnt[j]++;
                    target /= j;
                }
            }
        }

        for (int j = 0; j < 20; j++)
        {
            if(ans[j] < cnt[j]) 
                ans[j] = cnt[j];
        }
    }
    
    int answer = 1;
    for (int i = 0; i < 20; i++) {
        answer *= pow(i, ans[i]);
    }
    
    printf("answer: %d\n", answer);

    return 0;
}
