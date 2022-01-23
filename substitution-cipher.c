#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    string cipherKey = argv[1];
    string cipherError;
    int keyLength = strlen(cipherKey);
    char letters[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

    // loop to chack for repeating characters in cipher key
    for (int i = 0; i < keyLength; i++)
    {
        for (int j = i + 1; j < keyLength; j++)
        {
            if (cipherKey[i] == cipherKey[j])
            {
                cipherError = "No repeating characters allowed in key\n";
            }
        }
    }
    // checks if error message was created
    if (strlen(cipherError) > 1)
    {
        printf("%s\n", cipherError);
    }
    // checks if cipher key is 26 characters
    else if (keyLength == 26)
    {
        printf("%s\n", argv[1]);
        string secretMessage = get_string("message: ");
        int index;
        char codedMessage[100];

        printf("coded message: ");

        // loops through characters in messsage
        for (index = 0; index < strlen(secretMessage); index++)
        {
            // checks that character is in alphabet
            if (isalpha(secretMessage[index]))
            {
                // gets index of letter in alphabet
                int letterIndex = strchr(letters, tolower(secretMessage[index])) - letters;

                // checks if char was upper or lower case
                if (secretMessage[index] == tolower(secretMessage[index]))
                {
                    codedMessage[index] = tolower(cipherKey[letterIndex]);
                }
                else
                {
                    codedMessage[index] = toupper(cipherKey[letterIndex]);
                }
            }
            else
            {
                // adds char to codded message if char is not alpha
                codedMessage[index] = secretMessage[index];
            }
        }

        printf("%s\n", codedMessage);
    }
    else
    {
        printf("oops");
    }
}