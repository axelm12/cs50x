#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do
    {
        height = get_int("Give a non negative integer between 0 and 23: ");
       // printf("%i\n", height);
    }
    while (height <=-1 || height > 23);

    for (int i = 0; i < height; i++)
    {
//print the spaces
        for (int spaces = height - i; spaces >= 2; spaces--)
        {
            printf(" ");
        }
//print the #
        for (int hashes = -2 ; hashes < i; hashes++)
        {
            printf("#");
        }
//print the new line
        printf("\n");

    }

}
//the first row has 2# and height minus 1 spaces
//the last row will have height + 2 hashes and height minus row number spaces (so zero)
