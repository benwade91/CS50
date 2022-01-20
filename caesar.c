
#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    int key = atoi(argv[1]);
    char letters[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

    if (argc != 2 || key == 0)
    {
        printf("Usage: ./caesar key");
    }
    else
    {
        string cipherstring = get_string("plaintext: ");

        int index;
        char cipherarr[50];

        printf("cipher: ");

        for (index = 0; index < strlen(cipherstring); index++)
        {
            if (isalpha(cipherstring[index]))
            {
                int letterindex = strchr(letters, tolower(cipherstring[index])) - letters;
                int newindex = (letterindex + key) % 26;
                if (tolower(cipherstring[index]) == cipherstring[index])
                {
                    cipherarr[index] = letters[newindex];
                }
                else
                {
                    cipherarr[index] = toupper(letters[newindex]);
                }
            }
            else
            {
                cipherarr[index] = cipherstring[index];
            }

            printf("%c", cipherarr[index]);
        }
        printf("\n");
    }
}