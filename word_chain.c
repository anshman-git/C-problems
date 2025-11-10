#include<stdio.h>
#include<string.h>
void start_game();
void rules();

int main() {
    printf("\t \t Welcome to the Word Chain game\n");
    printf("\n");
    rules();
    printf("\nPress Any Key to Start a New Game\n");
    getchar();
    start_game();
    printf("----Thanks For Playing----");
    return 0;
}

void start_game() {
    char word[100];
    int length;
    char first_word;
    char last_word='a';
    
    printf("Game Started\n\n");
    do {
        printf("Enter a word starting with %c ",last_word);
        scanf("%s",word);
        length=strlen(word);
        first_word=word[0];
        if(first_word!=last_word) {
            break;
        }
        last_word=word[length-1];
        
    } while(1);

    printf("\nxxxx Wrong word xxxx\n");
    return;
}

void rules() {
    printf("Rules are:-");
    printf("You have to enter a valid word which start have the last letter of the previous letter");
    printf("\n");
}