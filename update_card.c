#include "card.h"

void update_cards_face(t_cards *cards, char c)
{
    int i = 0;
    while (cards->face_cards[i])
    {
        if (c == cards->face_cards[i])
            break;
        i++;
    }
    char new_char = 'w';
    cards->face_cards[i] = new_char;
}

void update_cards_numbers(t_cards *cards, int delete)
{
    int nbr[] = {2, 3, 4, 5, 6, 7, 8, 9};
    for (int i = 0; i < 8; i++)
    {
        if (cards->number_cards[i] != delete)
            cards->number_cards[i] = nbr[i];
        else
            cards->number_cards[i] = 0;
    }
}

void update_the_cards(t_cards *cards, char c, int i)
{
    if (i == -1)
        update_cards_face(cards, c);
    else
        update_cards_numbers(cards, i);
}