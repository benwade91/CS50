#include <cs50.h>
#include <stdio.h>
#include <strings.h>

int main(int argc, char *argv[])
{
    string cipherKey = argv[1];
    if (strlen(cipherKey) == 26)
    {
    printf("%s\n", argv[1]);
    }
    else
    {
        printf("oops");
    }
    
    
}