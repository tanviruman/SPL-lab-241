
#include<stdio.h>
#include<stdbool.h>
int main()
{
    int X;
    scanf("%d", &X);

    int n;
    scanf("%d", &n);

    bool player2KiRightGuessKoreche = false;

    for(int i=1; i<=n; i++)
    {
        int Y;
        scanf("%d", &Y);

        if(X==Y)
        {
            printf("Right, Player-2 wins!\n");
            player2KiRightGuessKoreche = true;
            break;
        }
        else
        {
            printf("Wrong, %d Choice(s) Left!\n", n-i);
        }
    }

    if(player2KiRightGuessKoreche==false)
    {
        printf("Player-1 wins!\n");
    }

}