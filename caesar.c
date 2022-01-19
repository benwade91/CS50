#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    long key = strtol(argv[1], NULL, 10);

    if (argc != 2 || key == 0)
    {
        printf("Usage: ./caesar key");
    }
    else
    {
        printf("%li\n", key);
    }
}