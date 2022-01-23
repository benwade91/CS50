#include <cs50.h>
#include <stdio.h>
#include <strings.h>

int main(int argc, char *argv[])
{
    string cipherKey = argv[1];
    string cipherError;
    int keyLength = strlen(cipherKey);

    for (int i = 0; i < keyLength; i++)
    {
        for (int j = i+1; j < keyLength; j++)
        {
            if (cipherKey[i] == cipherKey[j])
            {
                cipherError = "No repeating characters allowed in key\n";
            }
            
        }
        
    }
    
    if (strlen(cipherError) > 1)
    {
        printf("%s", cipherError);
    }
    else if (keyLength == 26)
    {
    printf("%s\n", argv[1]);
    }
    
    else
    {
        printf("oops");
    }
    
    
}