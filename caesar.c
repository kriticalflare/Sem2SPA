#include <stdio.h>
#include <cs50.h> //cs50 library
#include <string.h>
#include <ctype.h>
 int main(int argc, string argv[])
 {
    // check for 2 arguments only
    if (argc != 2)
    {
        printf("usage: ./caesar key\n");
        return 1;
    }
    char *input = argv[1];
    for(int i=0;i<=strlen(input);i++)
    {
        if(isalpha(input[i]))
        {
        printf("usage: ./caesar key");
        return 1;
        }
    }

    int k = atoi(argv[1]);

    if (k < 0)
    {
        printf("Nope\n");
        return 1;
    }
    else
    {
        // prompt user for a code to encrypt
        string code = get_string("Plaintext:");
        printf("ciphertext:");

        for (int i = 0, n = strlen(code); i < n; i++)
            {
                //check if the letter is uppercase or lowercase then convert
                if islower(code[i])
                    printf("%c", (((code[i] + k) - 97) % 26) + 97);
                else if isupper(code[i])
                    printf("%c", (((code[i] + k) - 65) % 26) + 65);
                //if neither then just print whatever it is
                else
                    printf("%c", code[i]);
            }
            printf("\n");
            return 0;
    }
}
