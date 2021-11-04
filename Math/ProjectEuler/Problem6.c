/**
 * > file: Problem6.c
 * > author: Kadrick / Bo Gwon Kang (kbk2581553@gmail.com)
 * > date: 2021-11-04 03:54 
 * > description: sum formula
 * @copyright Copyright (c) 2021
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    int upper = 100;
    int noSquare = upper * (upper + 1) / 2;
    int Square = upper * (upper + 1) * (2 * upper + 1) / 6;
    
    printf("ans: %d\n", abs(pow(noSquare,2) - Square));

    return 0;
}