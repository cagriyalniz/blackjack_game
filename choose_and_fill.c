#include "card.h"

void fill_the_cards(t_cards *cards)
{
    char face[] = "TJDKA";
    int nbr[] = {2, 3, 4, 5, 6, 7, 8, 9};
    for (int i = 0; i < 5; i++)
    {
        cards->face_cards[i] = face[i];
    }
    for (int i = 0; i < 8; i++)
    {
        cards->number_cards[i] = nbr[i];
    }
}

int chose_a_nbr(t_cards *c)
{
    while (1)
    {
        int r = 2 + (rand () % 9);
        if (is_number_here(r, c->number_cards))
        {
            update_cards_numbers(c, r);
            return r;
        }
    }
    return 0;
}

int is_face_here(int c, char *face)
{
    int i = 0;
    while(face[i])
    {
        if (face[i] == c)
            return 1;
        i++;
    }
    return 0;
}

int chose_a_face(t_cards *c)
{
    while (1)
    {
        
        int r = rand() % 5;
        if (is_face_here(r, c->face_cards))
        {
            update_cards_face(c, r);
            if (c->face_cards[r] == 'A' && hand == )
            return 10;
        }
    }
    return 0;
}

int chose_a_card(t_cards *c)
{
    srand(time(NULL));
    int r = rand() % 2;
    printf("chose_a_card r %d", r);

    if (r == 0 && is_number_empty(c) == 0)
        return(chose_a_nbr(c));
    else
        return(chose_a_face(c));
        
}