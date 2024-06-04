#include "BlackJack.h"

bool playBlackJack(const std::array<Card, MAX_SUITS * MAX_RANK> &deck) {
    const Card* cardPtr = &(deck[0]);
    int pointDealer = 0;
    int pointPlayer = 0;

    // Дилер получает одну карту
    pointDealer += getCardValue(*(cardPtr++));

    // Игрок получает 2 карты
    pointPlayer += getCardValue(*(cardPtr++));
    pointPlayer += getCardValue(*(cardPtr++));

    bool flag = true;
    while (1) {
        std::cout << "You have: " << pointPlayer << std::endl;
        if (pointPlayer > 21)
            return false;

        char choice = getPlayerChoice();
        if (choice == 's')
            break;
        pointPlayer += getCardValue(*cardPtr++);
    }

    // Если игрок не проиграл и у него не больше 21 очка, то тогда
    // дилер получает карты до тех пор, пока у него не получится в сумме 17 очков
    while (pointDealer < 17)
    {
        pointDealer += getCardValue(*cardPtr++);
        std::cout << "The dealer now has: " << pointDealer << '\n';
    }
    if (pointDealer > 21)
        return true;

    return (pointPlayer > pointDealer);
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