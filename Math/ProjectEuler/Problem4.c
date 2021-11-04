/**
 * > file: Problem4.c
 * > author: Kadrick / Bo Gwon Kang (kbk2581553@gmail.com)
 * > date: 2021-11-04 03:18 
 * > description: palindrome & product
 * @copyright Copyright (c) 2021
 */
#include <stdio.h>
#include <string.h>

/**
 * > description: check n is Palindrome
 * 
 * @param n 
 * @return int 
 */
int isPalindrome(int n)
{

    int digit[10], base = 10, sz = 0;
    memset(digit, -1, sizeof(digit));

    // parsing
    for (int i = 1; n != 0; i++)
    {
        sz++;
        digit[i] = n % base;
        n /= 10;
    }

    // check
    for (int i = 1; i <= sz / 2; i++)
    {
        if (digit[i] != digit[sz - i + 1])
            return 0;
    }

    return 1;
}

int main(void)
{
    int ans = 0;
    for (int i = 100; i <= 999; i++)
    {
        for (int j = 100; j <= 999; j++)
        {
            if (isPalindrome(i * j) && ans < i * j)
                ans = i * j;
        }
    }

    printf("%d", ans);

    return 0;
}