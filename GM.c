#include <stdio.h>

int main()
{
    printf("Tell the current position of player? (You are allowed to only input a character)\nThen input the no. of moves.\n");
    char position;
    //filtering positions
    do {
        scanf("%c", &position);
    }
    while (!(position >= 65 && position <= 90 || position >= 97 && position <= 122));
    int moves;
    scanf("%d", &moves);
    //filtering moves
    moves = moves % 26;

    printf("Final position of the player is\n");
    //Applying the game algorithm
    if (position <= 90 && position >= 65)
    {
        position += moves;
        if (position > 90)
        {
            position -= 26;
        }
        printf("%c", position);
    }
    else
    {
        position += moves;
        if (position > 122)
        {
            position -= 26;
        }
        printf("%c", position);
    }
}