#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "cs50.h"
int duration(string fraction)
{
    // 2nd. TODO - 1/8 should return 1, 1/2 should return 4
    //denominators options, 8, 4, 2, 1
    // if denominator is 2, then multiply numerator by 4
    // if d is 1, then * 8
    int numerator = atoi(&fraction[0]);
    int denominator = atoi(&fraction[2]);
    return ((8/denominator)*numerator);
}
int main(void)
{
   printf("%s, %i\n", "1/2", duration("1/2"));
   printf("%s, %i\n", "1/4", duration("1/4"));
   printf("%s, %i\n", "1/8", duration("1/8"));
   printf("%s, %i\n", "2/2", duration("2/2"));
}