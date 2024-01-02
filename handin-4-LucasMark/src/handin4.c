#include <stdlib.h>
#include <stdio.h>
#include <time.h>

// Enums
enum TYPES_OF_CARD {
    Clubs,
    Diamonds,
    Hearts,
    Spades,
    Joker
};

struct Card{ // Card template
    int Value; // Card number
    int Color; // Card type
};

// Func. Prototypes
struct Card* unshuffledDeck();

struct Card* shuffleDeck(struct Card* unshuffledDeck);

int comparator(const void* p, const void* q);

//Main
int main(void){
    char cardValue[14][11] = {"", "Ace Of", "2 of", "3 of", "4 of", "5 of", "6 of", "7 of", "8 of", "9 of", "10 of", "Knight of", "Queen of", "King of"};
    char cardColor[5][11] = {"Clubs", "Diamonds", "Hearts", "Spades", "Joker"};
    struct Card* deckOfCards = unshuffledDeck();
    shuffleDeck(deckOfCards);
    qsort(deckOfCards, 55, sizeof(struct Card), comparator);
    for(int i = 0; i < 55; i++){
        printf("Card number %d is the %s %s \n", i, cardValue[deckOfCards[i].Value], cardColor[deckOfCards[i].Color]);
    }
    return 0;
}

// Functions
int comparator(const void* p, const void* q)
{
    struct Card l = *(struct Card*)p;
    struct Card r = *(struct Card*)q;
    if (l.Color != r.Color){
        return (l.Color-r.Color);
    }
    else{
        return (l.Value-r.Value);
    }
}

struct Card* unshuffledDeck(){
    int deck_placement = 0;
    struct Card* deckOfCards = (struct Card*) malloc(sizeof(struct Card) * 55);

    for (int i = 1; i <= 13; i++) {
        for (int j = Clubs; j < Joker; j++) {
            deckOfCards[deck_placement].Value = i;
            deckOfCards[deck_placement].Color = j;
            deck_placement++;
        }
        if (i == 3 || i == 7 || i == 9) {
            deckOfCards[deck_placement].Value = 0;
            deckOfCards[deck_placement].Color = Joker;
            deck_placement++;
        }
    }
    return deckOfCards;
};

struct Card* shuffleDeck(struct Card* unshuffledDeck){
    srand(time(NULL));
    for( int i = 0 ; i < 22 ; i++ ) {
        struct Card temp;
        int r = rand() % 54;
        int s = rand() % 54;
        temp = unshuffledDeck[r];
        unshuffledDeck[r] = unshuffledDeck[s];
        unshuffledDeck[s] = temp;
    }
    return unshuffledDeck;
}