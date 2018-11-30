#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/*pseudocode
get key from command line argument
turn key into integer
promt for plaintext
for each character in the plaintext string
    if alpahbetic
        preserve case
        shift plaintext charactesr by key
print ciphertext
*/

int main(int argc, string argv[])
{
    if(argc !=2)
    {
        printf("Error: argc does not equal 2");
        return 1;
    }
    //Get key from command line argument
    //string k = argv[1];
    //turn key into integer
    string input = argv[1];
    int keylen = strlen(input);
    int key[keylen];
    int counter = 0;
    for (int j = 0; j < keylen; j++)
                {
                key[counter] = atoi((string) input[j]);
                    counter++;
                }
    key[counter] = '\0'
    //int key = atoi(argv[1]);
    //prompt for plaintext
    string p = get_string("plaintext: ");
    //printf("plaintext: %s", p);
    //for each character in the plaintext string
    printf("ciphertext: ");
    for (int i = 0, n = strlen(p); i < n; i++)
    {
        //if alphabetic
        if(isalpha(p[i]))
        {
            if (isupper(p[i]))
            {
                printf("%c", (p[i] - 'A' + key) % 26 + 'A');
            }
            if (islower(p[i]))
            {
                printf("%c", (p[i] - 'a' + key) % 26 + 'a');
            }
        }    
        else
        {
            printf("%c", p[i]);
        }
    }
    printf("\n");
}