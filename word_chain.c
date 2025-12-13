#include <stdio.h>
#include <string.h>
#include <ctype.h>

void one_player_game();
void n_player_game();
void one_winner_amoung_n();
void word_limit_n();
void rules();

void to_lowercase(char *s)
{
    for (; *s; ++s)
        *s = tolower((unsigned char)*s);
}

char usedWords[2000][100];
int usedCount = 0;

int is_word_used(const char *word)
{
    for (int i = 0; i < usedCount; ++i)
    {
        if (strcmp(usedWords[i], word) == 0)
        {
            return 1;
        }
    }
    return 0;
}

int add_used_word(const char *word)
{
    if (usedCount >= 2000)
    {
        return 0;
    }
    strncpy(usedWords[usedCount], word, 100 - 1);
    usedWords[usedCount][100 - 1] = '\0';
    usedCount++;
    return 1;
}

void reset_used_words()
{
    usedCount = 0;
}

int search_in_dictionary_simple(char *word)
{
    FILE *fp = fopen("words.txt", "r");
    if (!fp)
    {
        printf("Error: Could not open words.txt\n");
        return 0;
    }

    char line[200];

    while (fgets(line, sizeof(line), fp))
    {

        line[strcspn(line, "\n")] = 0;

        if (strcmp(line, word) == 0)
        {
            fclose(fp);
            return 1;
        }
    }

    fclose(fp);
    return 0;
}

int main()
{
    int op;
    printf("\n \t \t Welcome to the Word Chain game\n");
    printf("\n");
    rules();
option:
    printf("\n1.Single Player \n2.Multiplayer \n3.Tournament\n4. Word limit mode\n");
    scanf("%d", &op);
    switch (op)
    {
    case 1:
        one_player_game();
        break;
    // case 2:
    //     two_player_game();
    //     break;
    case 2:
        n_player_game();
        break;
    case 3:
        one_winner_amoung_n();
        break;
    case 4:
        word_limit_n();
        break;
    default:
        printf("\nWrong option\n");
        goto option;
    }
    printf("\t----Thanks For Playing----\t");

    printf("\nPress Enter to exit...\n");
    getchar();
    getchar();
    return 0;
}

void rules()
{
    printf("\n================ GAME RULES ================\n");

    printf("\nWelcome to the Word Chain Game! \n");
    printf("Follow these rules to play like a pro:\n\n");

    printf("1. You must enter a valid word that exists in the dictionary file (words.txt).\n");
    printf("2. The word must start with the LAST letter of the previous word.\n");
    printf("3. No repeating words — once used, it cannot be used again.\n");

    printf("\n-- GAME MODES --\n");

    printf("1. Single Player Mode:\n");
    printf("   • You keep entering words.\n");
    printf("   • If your word is invalid or starts with the wrong letter, the game ends.\n");
    printf("   • Your score is the number of correct words you entered.\n\n");

    printf("2. Multiplayer Mode:\n");
    printf("   • All players play in a fixed order.\n");
    printf("   • The player who enters an invalid or wrong word loses immediately.\n\n");

    printf("3. Tournament Mode (One Winner Among All):\n");
    printf("   • All players start together.\n");
    printf("   • If any player enters a wrong word, they are eliminated.\n");
    printf("   • Last remaining player is the WINNER.\n\n");

    printf("4. Word Limit Mode:\n");
    printf("   • Every few rounds, the word length limit increases.\n");
    printf("   • You must enter a word with EXACT length.\n");
    printf("   • Invalid length = immediate elimination.\n\n");

    printf("Tip: Be quick, be sharp, and let the letters flow!\n");
    printf("============================================\n\n");
}

void one_player_game()
{
    reset_used_words();
    char word[100];
    int length;
    char first_word;
    char last_word = 'a';
    int score = 0;

    printf("\nGame Started\n");
    do
    {
        printf("\n");
        printf("Enter a word starting with %c : ", last_word);
        if (scanf("%99s", word) != 1)
            break;
        to_lowercase(word);

        if (!search_in_dictionary_simple(word))
        {
            printf("Invalid word (not in dictionary)\n");
            break;
        }
        if (is_word_used(word))
        {
            printf("Word already used!\n");
            break;
        }
        add_used_word(word);

        length = strlen(word);
        if (length == 0)
            break;
        first_word = word[0];

        if (first_word != last_word)
        {
            break;
        }
        last_word = word[length - 1];
        score++;

    } while (1);

    printf("\nxxxx Wrong word xxxx\n");
    printf("Total score : %d\n", score);
}

void n_player_game()
{
    reset_used_words();
    char word[100];
    int length;
    char first_word;
    char last_word = 'a';
    int n, c = 0;
    printf("Enter number of players...");
    scanf("%d", &n);

    do
    {
        for (int i = 1; i <= n; i++)
        {
            printf("\n");
            printf("Player %d\n", i);
            printf("Enter a word starting with %c : ", last_word);
            scanf("%99s", word);
            to_lowercase(word);

            if (!search_in_dictionary_simple(word))
            {
                printf("Invalid word (not in dictionary)\n");
                c = i;
                goto end;
            }

            if (is_word_used(word))
            {
                printf("Word already used!\n");
                c = i;
                goto end;
            }
            add_used_word(word);

            length = strlen(word);
            if (length == 0)
            {
                c = i;
                goto end;
            }
            first_word = word[0];
            if (first_word != last_word)
            {
                c = i;
                goto end;
            }

            last_word = word[length - 1];
        }
    } while (1);

end:
    printf("\nPlayer %d loss\n", c);
    printf("\nxxxx Wrong word xxxx\n");
}


void one_winner_amoung_n()
{
    reset_used_words();
    char word[100];
    int length, temp;
    char first_word;
    char last_word = 'a';
    int n, c, a = 1;
    printf("Enter number of players...");
    scanf("%d", &n);
    
    int players[n];
    for (int i = 0; i < n; i++)
    {
        players[i] = a++;
    }
    
    printf("Game Started\n\n");
    while (n > 1)
    {
        for (int i = 0; i < n; i++)
        {
            printf("\n");
            printf("Player %d\n", players[i]);
            printf("Enter a word starting with %c : ", last_word);
            scanf("%99s", word);
            to_lowercase(word);
            
            if (!search_in_dictionary_simple(word))
            {
                printf("Invalid word (not in dictionary)\n");
                printf("Player %d out\n", players[i]);
                
                for (int j = i; j < n - 1; j++)
                {
                    players[j] = players[j + 1];
                }
                n--;
                i--;
                continue;
            }
            
            if (is_word_used(word))
            {
                printf("Word already used!\n");
                printf("Player %d out\n", players[i]);
                for (int j = i; j < n - 1; j++)
                {
                    players[j] = players[j + 1];
                }
                n--;
                i--;
                continue;
            }
            length = strlen(word);
            first_word = word[0];
            if (first_word != last_word)
            {
                printf("Wrong starting letter — Player %d out\n", players[i]);
                for (int j = i; j < n - 1; j++)
                {
                    players[j] = players[j + 1];
                }
                n--;
                i--;
                continue;
            }
            
            add_used_word(word);
            last_word = word[length - 1];
        }
    }
    
    if (n == 1)
    printf("\n Player %d is the WINNER\n", players[0]);
    else
    printf("\nGame ended.\n");
}

void word_limit_n()
{
    reset_used_words();
    char word[100];
    int length, temp;
    char first_word;
    char last_word = 'a';
    int n, c, a = 1;
    int limit, round = 1;
    printf("Enter number of players...");
    scanf("%d", &n);
    
    int players[n];
    for (int i = 0; i < n; i++)
    players[i] = a++;
    limit = 3;
    printf("Game Started\n\n");
    
    while (n > 1)
    {
        if (round % 3 == 0)
        {
            limit++;
        }
        for (int i = 0; i < n; i++)
        {
            if (n == 1)
            {
                break;
            }
            printf("\n");
            printf("Player %d\n", players[i]);
            printf("Enter only %d letter word--\n", limit);
            printf("starting with %c : ", last_word);
            scanf("%s", word);
            to_lowercase(word);
            
            length = strlen(word);
            first_word = word[0];
            
            if (!search_in_dictionary_simple(word) || length != limit)
            {
                printf("\nPlayer %d out (invalid or wrong length)\n", players[i]);
                for (int j = i; j < n - 1; j++)
                {
                    players[j] = players[j + 1];
                }
                n--;
                i--;
                continue;
            }
            if (is_word_used(word))
            {
                printf("\nPlayer %d out (word already used)\n", players[i]);
                for (int j = i; j < n - 1; j++)
                {
                    players[j] = players[j + 1];
                }
                n--;
                i--;
                continue;
            }
            add_used_word(word);
            last_word = word[length - 1];
        }
        round++;
    }

    if (n == 1)
    printf("\n Player %d is the WINNER\n", players[0]);
    else
    printf("\nGame ended.\n");
}