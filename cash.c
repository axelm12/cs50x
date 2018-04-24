#include <cs50.h>
#include <stdio.h>
#include <math.h>
//#define QUARTER 25

//Program task
//asks the user how much change is owed
//then spits out the minimum number of coins with which said change can be made.


int coins;
float change;
int i;

int main(void)
{
    do
    {
        change = get_float("Change owed: ");
    }
    while (change < 0.00);
    //removes decimal point
    int changeInt  = round(change * 100);
    //check for quarters
    while ((changeInt - 25) >= 0)
    {
        for (i = 0; ((changeInt / 25) >= 1); i++)
        {
            changeInt -= 25;
        }
        coins += i;
        break;
    }
    while ((changeInt - 10) >= 0)
    {
        for (i = 0; ((changeInt / 10) >= 1); i++)
        {
            changeInt -= 10;
        }
        coins += i;
        break;
    }
    while ((changeInt - 5) >= 0)
    {
        for (i = 0; ((changeInt / 5) >= 1); i++)
        {
            changeInt -= (5);
        }
        coins += i;
        break;
    }
    while (changeInt > 0)
    {
        for (i = 0; ((changeInt / 1) > 0); i++)
        {
            changeInt -= (1);
        }
            = coins += i;
    }

    printf("%i\n", coins);

}