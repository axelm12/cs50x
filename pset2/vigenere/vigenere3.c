#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/*TODO/pseudocode
1. get key from command line argument
turn key into integer
2. promt for plaintext
3. encipher
for each character in the plaintext string
    if alpahbetic
        preserve case
        shift plaintext charactesr by key
4. print ciphertext
*/

/*
Pseudocode
check that there argv == 2
check for key
    check that key is alpha
    check that key is not numbers
    find length of key
    sepearete the
    find value (0-25) of ea
    iterate over value of "ith"
*/

int main(int argc, string argv[])
{
    //checks for two arguments
    if(argc != 2)
    {
        printf("Error: argc does not equal 2");
        return 1;
    }
    // Store argvp[1] in a variable
    string input = argv[1];
    //checks that argument number two (argv[1]) is only alpha
    int alphacount = 0;
    int n = strlen(input);
    for (int i = 0; i < n; i++)
    {
        if (isalpha(input[i]))
        {
        alphacount++;
        }
    }
    // this loop will exectute if every char of the key is alpha
    //char key = input;
    if(alphacount == n)
    {
    char keylocker[n+1];
    //string s = get_string("Name: ");
    int length = 0;
    for (int i = 0; i < n; i++)
    {
        keylocker[length] = input[i];
        length++;
    }
    keylocker[length] = '\0';
    printf("%s\n", keylocker);
    //atoi
    int keyint[n+1];
    //string s = get_string("Name: ");
    int keylength = 0;
    for (int i = 0; i < n; i++)
    {
        keylocker[length] = atoi(keylocker[i]);
        length++;
    }
    // Prompt for plaintext
   // string plaintext = get_string("plaintext: ");
    //printf("%c\n", keylocker);
    }
}