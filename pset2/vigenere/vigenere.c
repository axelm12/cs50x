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
int main(int argc, string argv[])
{
    //checks for two arguments
    if (argc != 2)
    {
        printf("Error: argc does not equal 2");
        return 1;
    }
    // Store argvp[1] in a variable
    string input = argv[1];
    //checks that argv[1] is only alpha
    int alphacount = 0;
    for (int i = 0; i < strlen(input); i++)
    {
        if (isalpha(input[i]))
        {
            alphacount++;
        }
    }
    // this loop will exectute if every char of the key is alpha
    if (alphacount == strlen(input))
    {
        // get lenght of keyword
        int keylen = strlen(input);
        // Get String input and print plaintext prompt
        string p = get_string("plaintext: ");
        printf("ciphertext: ");
        // The key iterate over the key
        for (int i = 0, keycount = 0, nn = strlen(p); i < nn; i++)
        {
            //if alphabetic
            if (isalpha(p[i]))
            {
                if (isupper(p[i]))
                {
                    if (isupper(input[i % keylen]))
                    {
                        printf("%c", (p[i] - 'A' + ((input[keycount % keylen]) - 'A') % 26) % 26 + 'A');
                        keycount++;
                    }
                    if (islower(input[i % keylen]))
                    {
                        printf("%c", (p[i] - 'A' + ((input[keycount % keylen]) - 'a') % 26) % 26 + 'A');
                        keycount++;
                    }
                }
                if (islower(p[i]))
                {
                    if (isupper(input[i % keylen]))
                    {
                        printf("%c", (p[i] - 'a' + ((input[keycount % keylen]) - 'A') % 26) % 26 + 'a');
                        keycount++;
                    }
                    if (islower(input[i % keylen]))
                    {
                        printf("%c", (p[i] - 'a' + ((input[keycount % keylen]) - 'a') % 26) % 26 + 'a');
                        keycount++;
                    }
                }
            }
            else
            {
                printf("%c", p[i]);
            }
        }
    }
    else
    {
        printf("Error: non alpha key");
        return 1;
    }
    printf("\n");
}