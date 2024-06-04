
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
    if (playBlackJack(deck))
        std::cout << "You win!\n";
    else
        std::cout << "You lose!\n";
}