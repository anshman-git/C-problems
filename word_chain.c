#include <stdio.h>
#include <string.h>
void one_player_game();
void two_player_game();
void n_player_game();
void one_winner_amoung_n();
void rules();

int main()
{
    int op;
    printf("\t \t Welcome to the Word Chain game\n");
    printf("\n");
    rules();
    printf("\n1.One Player \n2.Two player \n3.Multiplayer player \n4.Tournament\n");
    scanf("%d", &op);
    switch (op)
    {
    case 1:
        one_player_game();
        break;
    case 2:
        two_player_game();
        break;
    case 3:
        n_player_game();
        break;
        case 4: one_winner_amoung_n();
        break;
    default:
        printf("Wrong option");
        break;
    }
    printf("\t----Thanks For Playing----\t");
    return 0;
}

void one_player_game()
{
    char word[100];
    int length;
    char first_word;
    char last_word = 'a';

    printf("Game Started\n\n");
    do
    {
        printf("Enter a word starting with %c ", last_word);
        scanf("%s", word);
        length = strlen(word);
        first_word = word[0];
        if (first_word != last_word)
        {
            break;
        }
        last_word = word[length - 1];

    } while (1);

    printf("\nxxxx Wrong word xxxx\n");
}

void rules()
{
    printf("Rules are:-");
    printf("You have to enter a valid word which start have the last letter of the previous letter");
    printf("\n");
}

void n_player_game()
{
    char word[100];
    int length;
    char first_word;
    char last_word = 'a';
    int n, c;
    printf("Enter number of players...");
    scanf("%d", &n);
    printf("Game Started\n\n");
    do
    {
        for (int i = 1; i <= n; i++)
        {
            do
            {
                printf("Player %d\n", i); 
                printf("Enter a word starting with %c ", last_word);
                scanf("%s", word);
                length = strlen(word);
                first_word = word[0];
                c = i;
                if (first_word != last_word)
                {
                    goto a;
                }
                if (first_word == last_word)
                {
                    last_word = word[length - 1];
                    break;
                }

            } while (1);
        }
    } while (1);
a:
    printf("\nPlayer %d loss\n", c);
    printf("\nxxxx Wrong word xxxx\n");
}

void two_player_game()
{

    char word[100];
    int length;
    char first_word;
    char last_word = 'a';
    printf("Game Started\n\n");

    int player;
    do
    {
        player = 1;
    b:
        if (player == 1)
        {
            printf("player %d enter a word starts with %c :", player, last_word);
            scanf("%s", word);
            length = strlen(word);
            first_word = word[0];
            if (first_word != last_word)
            {
                goto a;
            }
            else if (first_word == last_word)
            {
                last_word = word[length - 1];
                player = 2;
                goto b;
            }
        }
        else if (player == 2)
        {
            printf("player %d enter a word start with %c: ", player, last_word);
            scanf("%s", word);
            length = strlen(word);
            first_word = word[0];
            if (first_word != last_word)
            {
                goto a;
            }
            last_word = word[length - 1];

            player = 1;
        }

    } while (1);
a:
    printf("\nxxxx Wrong word xxxx\n");
    printf("Player %d loss\n", player);
}

void one_winner_amoung_n() {
    char word[100];
    int length,temp;
    char first_word;
    char last_word = 'a';
    int n,c,a=1;
    printf("Enter number of players...");
    scanf("%d", &n);
    int players[n];
    for(int i=0;i<n;i++) {
        players[i]=a++;
    }

    printf("Game Started\n\n");
    do
    {
        for (int i = 0; i < n; i++)
        {

            if (n == 1)
            {
                goto a;
            }
            printf("Player %d\n", players[i]);
            printf("Enter a word starting with %c ", last_word);
            scanf("%s", word);
            length = strlen(word);
            first_word = word[0];

            if (first_word != last_word)
            {
                for (int j = i; j < n-1; j++)
                {
                    temp = players[j];
                    players[j] = players[j + 1];
                    players[j + 1] = temp;
                }
                n--;
                i--;
                break;
            }
            if (first_word == last_word)
            {
                last_word = word[length - 1];
                
            }
        }
    } while (1);
a:
printf("\n Player %d is the WINNER\n",players[0]);

}