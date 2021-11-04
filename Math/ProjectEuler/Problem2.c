/**
 * > file: Problem2.c
 * > author: Kadrick / Bo Gwon Kang (kbk2581553@gmail.com)
 * > date: 2021-10-20 02:19 
 * > description: sum
 * @copyright Copyright (c) 2021
 */
#include <stdio.h>

long long ans, fibo[4000001];

int main(void) {

    fibo[1] = 1;
    fibo[2] = 2;
    ans = 2;

    for (int i = 3;; i++)
    {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
        if(fibo[i] > 4000000) break;
        if(fibo[i] % 2 == 0) ans += fibo[i];
    }
    
    printf("%d", ans);

    return 0;
}