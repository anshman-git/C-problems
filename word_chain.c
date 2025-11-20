#include<stdio.h>
#include<string.h>
void one_player_game();
void two_player_game();
void n_player_game();
void rules();

int main() {
    int op;
    printf("\t \t Welcome to the Word Chain game\n");
    printf("\n");
    rules();
    printf("\n1.One Player \n2.Two player \n3.Multiplayer player\n");
    scanf("%d",&op);
   switch (op) {
   case 1:one_player_game();
        break;
    case 2:two_player_game();
        break;
   case 3:n_player_game();
        break;
   default:printf("Wrong option");
    break;
   }
    printf("----Thanks For Playing----");
    return 0;
}

void one_player_game() {
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
    
}

void rules() {
    printf("Rules are:-");
    printf("You have to enter a valid word which start have the last letter of the previous letter");
    printf("\n");
}

void n_player_game() {
    char word[100];
    int length;
    char first_word;
    char last_word='a';
    int n;
    printf("Enter number of players...");
    scanf("%d",&n);
    printf("Game Started\n\n");
    do{
    for(int i=1;i<=n;i++) {

    do {
        printf("Player %d\n",i);
        printf("Enter a word starting with %c ",last_word);
        scanf("%s",word);
        length=strlen(word);
        first_word=word[0];
        if(first_word!=last_word) {
            goto a;
        }
        if(first_word==last_word) {
            last_word=word[length-1];
            break;
        }
        
    } while(1);
    }
}while(1);
    a:
    printf("\nxxxx Wrong word xxxx\n");
}

void two_player_game() {

    char word[100];
    int length;
    char first_word;
    char last_word='a';
    printf("Game Started\n\n");
    
    int player;
    do {
        player=1;
        b:
    if(player==1){
        printf("player %d enter a word starts with %c :",player,last_word);
        scanf("%s",word);
        length=strlen(word);
        first_word=word[0];
        if(first_word!=last_word) {
            goto a;
        }
        else if(first_word==last_word) {
        last_word=word[length-1];
        player=2;
        goto b;
        }
    }
    else if(player==2){
        printf("player %d enter a word start with %c: ",player,last_word);
        scanf("%s",word);
         length=strlen(word);
        first_word=word[0];
         if(first_word!=last_word) {
            goto a;
        }
            last_word=word[length-1];
          
        player=1;
    }
        
    } while(1);
a:
printf("\nxxxx Wrong word xxxx\n");
printf("Player %d loss\n",player);

    
}