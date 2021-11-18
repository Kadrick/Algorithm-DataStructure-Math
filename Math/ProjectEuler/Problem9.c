/**
 * @file Problem9.c
 * @author kadrick (kbk2581553@gmail.com)
 * @brief math
 * @version 0.1
 * @date 2021-11-18 15:40
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>
#include <math.h>

int main(void)
{
    long long ans = 0;

    /**
     * @brief Brute Force
     * 
     */

    for (int a = 1; a < 1001; a++)
    {
        for (int b = 1; b < 1001; b++)
        {
            for (int c = 1; c < 1001; c++)
            {
                if (a + b + c != 1000 || a >= b || b >= c || a >= c)
                    continue;
                if (a * a + b * b == c * c)
                {
                    if (ans < a * b * c)
                    {
                        ans = a * b * c;
                        printf("%d %d %d %lld\n", a, b, c, ans);
                    }
                }
            }
        }
    }

    printf("%lld\n", ans);

    return 0;
}