#include "BlackJack.h"

BlackJackResult playBlackJack(const std::array<Card, MAX_SUITS * MAX_RANK> &deck) {
    const Card* cardPtr = &(deck[0]);
    int pointDealer = 0;
    int pointPlayer = 0;

    // Число тузов. Туз можно считать как 1, так и 11.
    int countAceDealer = 0;
    int countAcePlayer = 0;

    // Дилер получает одну карту
    if (checkAce(*cardPtr))
        countAceDealer++;
    pointDealer += getCardValue(*(cardPtr++));

    // Игрок получает 2 карты
    if (checkAce(*cardPtr))
        countAcePlayer++;
    pointPlayer += getCardValue(*(cardPtr++));
    if (checkAce(*cardPtr))
        countAcePlayer++;
    pointPlayer += getCardValue(*(cardPtr++));

    while (true) {
        if (pointPlayer > 21) {
            if (countAcePlayer == 0) {
                std::cout << "You have: " << pointPlayer << std::endl;
                return BLACKJACK_DEALER_WIN;
            } else {
                countAcePlayer--;
                pointPlayer -= 10;
            }
        }
        std::cout << "You have: " << pointPlayer << std::endl;

        char choice = getPlayerChoice();
        if (choice == 's')
            break;
        if (checkAce(*cardPtr))
            countAcePlayer++;
        pointPlayer += getCardValue(*cardPtr++);
    }

    // Если игрок не проиграл и у него не больше 21 очка, то тогда
    // дилер получает карты до тех пор, пока у него не получится в сумме 17 очков
    while (pointDealer < 17) {
        if (checkAce(*cardPtr))
            countAceDealer++;
        pointDealer += getCardValue(*cardPtr++);
        std::cout << "The dealer now has: " << pointDealer << '\n';
    }
    if (pointDealer > 21) {
        if (countAceDealer == 0)
            return BLACKJACK_PLAYER_WIN;
        else {
            countAceDealer--;
            pointDealer -= 10;
        }
    }

    if (pointPlayer > pointDealer)
        return BLACKJACK_PLAYER_WIN;
    else if (pointPlayer < pointDealer)
        return BLACKJACK_DEALER_WIN;
    else
        return BLACKJACK_TIE;
}


bool checkAce(const Card &card) {
    return getCardValue(card) == 11;
}


char getPlayerChoice() {
    std::cout << "(h) to hit, or (s) to stand: ";
    char choice;
    bool flag = true;
    while (flag) {
        std::cin >> choice;
        flag = choice != 'h' && choice != 's';
    }
    return choice;
}