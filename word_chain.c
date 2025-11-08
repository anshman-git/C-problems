#include<stdio.h>
#include<string.h>
void start_game();
void rules();

int main() {
    printf("\t \t Welcome to the Word Chain game\n");
    printf("1. Star a New Game\n");
    printf("2. Help/Rules \n");
    printf("3. Exit \n");
    int choice;
    printf("Enter Your Choice : ");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:start_game();
        break;
    case 2:rules();
    break;
    case 3:break;
    default:printf("Enter a Correct Choice:");
        break;
    }
    printf("----Thanks For Playing----");
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

    printf("\n----Wrong word----\n");
    return;
}

void rules() {
    printf("Rules are:-");

}