#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <ctype.h>

int calculate(string word)
{
    char letters[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    int points[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
    int score = 0;
    printf("%s\n", word);

    for (int i = 0; i < strlen(word); i++)
    {
        int letterIndex = strchr(letters, tolower(word[i])) - letters;
        score += points[letterIndex];
    }
    
    return score;
}

int main(void)
{
    int player1, player2;

    string player1word = get_string("player 1: ");
    string player2word = get_string("player 2: ");
    player1 = calculate(player1word);
    player2 = calculate(player2word);

    if (player1 > player2)
    {
        printf("Player1 wins with a score of %i\n", player1);
    }
    else if (player1 < player2)
    {
        printf("Player2 wins with a score of %i\n", player2);
    }
    else
    {
        printf("Its a tie!\n");
    }
    
}