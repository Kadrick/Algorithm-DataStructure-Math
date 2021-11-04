/**
 * > file: Problem1.c
 * > author: Kadrick / Bo Gwon Kang (kbk2581553@gmail.com)
 * > date: 2021-10-17 03:37 
 * > description: sum
 * @copyright Copyright (c) 2021
 */
#include <stdio.h>

int main(void)
{
    int ans = 0;
    for (int i = 0; i < 1000; i++)
        ans += (i % 3 == 0 || i % 5 == 0) ? i : 0;

    printf("%d\n", ans);

    return 0;
}