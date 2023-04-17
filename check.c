#include "card.h"


int is_number_empty(t_cards *c)
{
    for (int i = 0; i < 8; i++)
    {
        if (c->number_cards[i] != 0)
            return 0;
    }
    return 1;
}

int is_number_here(int n, int *nbr)
{
    int i = 0;
    while(i < 8)
    {
        if (n == nbr[i])
            return 1;
        i++;
    }
    return 0;
}