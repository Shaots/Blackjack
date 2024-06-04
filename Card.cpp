#include "Card.h"

std::string toString(const Card &card) {
    std::string str1;
    switch (card.suit) {
        case SUIT_SPADE:
            str1 = "Spade ";
            break;
        case SUIT_HEART:
            str1 = "Heart ";
            break;
        case SUIT_CLUB:
            str1 = "Club ";
            break;
        case SUIT_DIAMOND:
            str1 = "Diamond ";
            break;
        default:
            str1 = "";
            break;
    }

    std::string str2;
    switch (card.rank) {
        case RANK_2:
            str2 = "2";
            break;
        case RANK_3:
            str2 = "3";
            break;
        case RANK_4:
            str2 = "4";
            break;
        case RANK_5:
            str2 = "5";
            break;
        case RANK_6:
            str2 = "6";
            break;
        case RANK_7:
            str2 = "7";
            break;
        case RANK_8:
            str2 = "8";
            break;
        case RANK_9:
            str2 = "9";
            break;
        case RANK_10:
            str2 = "10";
            break;
        case RANK_JACK:
            str2 = "jack";
            break;
        case RANK_QUEEN:
            str2 = "queen";
            break;
        case RANK_KING:
            str2 = "king";
            break;
        case RANK_ACE:
            str2 = "ace";
            break;
        default:
            str2 = "";
            break;
    }
    return str1 + str2;
}