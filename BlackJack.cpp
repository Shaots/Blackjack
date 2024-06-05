#include "BlackJack.h"


const int scoreThreshold = 21;
const int scoreThresholdDealer = 17;


BlackJack::BlackJackResult BlackJack::playBlackJack(Deck &deck) {
    int pointDealer = 0;
    int pointPlayer = 0;

    // Число тузов. Туз можно считать как 1, так и 11.
    int countAceDealer = 0;
    int countAcePlayer = 0;

    // Дилер получает одну карту
/*    if (checkAce(*deck.dealCard()))
        countAceDealer++;*/
    pointDealer += deck.dealCard().getCardValue();

    // Игрок получает 2 карты
/*    if (checkAce(*cardPtr))
        countAcePlayer++;*/
    pointPlayer += deck.dealCard().getCardValue();
/*    if (checkAce(*cardPtr))
        countAcePlayer++;*/
    pointPlayer += deck.dealCard().getCardValue();

    while (true) {
        std::cout << "You have: " << pointPlayer << std::endl;
        if (pointPlayer > scoreThreshold) {
            return BLACKJACK_DEALER_WIN;
            /*else {
                countAcePlayer--;
                pointPlayer -= 10;
            }*/
        }
        // std::cout << "You have: " << pointPlayer << std::endl;

        char choice = getPlayerChoice();
        if (choice == 's')
            break;
/*        if (checkAce(*cardPtr))
            countAcePlayer++;*/
        pointPlayer += deck.dealCard().getCardValue();
    }

    // Если игрок не проиграл и у него не больше 21 очка, то тогда
    // дилер получает карты до тех пор, пока у него не получится в сумме 17 очков
    while (pointDealer < scoreThresholdDealer) {
/*        if (checkAce(*cardPtr))
            countAceDealer++;*/
        pointDealer += deck.dealCard().getCardValue();
        std::cout << "The dealer now has: " << pointDealer << '\n';
        if (pointDealer > scoreThreshold) {
            // if (countAceDealer == 0)
            return BLACKJACK_PLAYER_WIN;
            /*else {
                countAceDealer--;
                pointDealer -= 10;
            }*/
        }
    }


    if (pointPlayer > pointDealer)
        return BLACKJACK_PLAYER_WIN;
    else if (pointPlayer < pointDealer)
        return BLACKJACK_DEALER_WIN;
    else
        return BLACKJACK_TIE;
}

char BlackJack::getPlayerChoice() {
    std::cout << "(h) to hit, or (s) to stand: ";
    char choice;
    bool flag = true;
    while (flag) {
        std::cin >> choice;
        flag = choice != 'h' && choice != 's';
    }
    return choice;
}

bool BlackJack::checkAce(const Card &card) {
    return card.getCardValue() == 11;
}

