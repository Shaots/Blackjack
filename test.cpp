
#include "test.h"

void test1() {
    srand(static_cast<unsigned int>(time(0)));
    std::array<Card, MAX_SUITS * MAX_RANK> deck = createDeck();
    std::cout << toStringDeck(deck) << std::endl;
    shuffleDeck(deck);
    std::cout << toStringDeck(deck) << std::endl;
    std::cout << getCardValue(deck[0]);
}

void test2() {
    srand(static_cast<unsigned int>(time(0)));
    std::array<Card, MAX_SUITS * MAX_RANK> deck = createDeck();
    shuffleDeck(deck);
    std::cout << toStringDeck(deck) << std::endl;
    switch (playBlackJack(deck)) {
        case BLACKJACK_PLAYER_WIN: std::cout << "You win!\n"; return;
        case BLACKJACK_DEALER_WIN: std::cout << "You lose!\n"; return;
        case BLACKJACK_TIE: std::cout << "Tie\n"; return;
    }
}