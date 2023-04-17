#include "card.h"

void put_cards(t_cards *cards)
{
    for (int i = 0; i < 8; i++)
    {
        printf("%d", cards->number_cards[i]);
    }
    for (int j = 0; j < 5; j++)
    {
        printf("%c", cards->face_cards[j]);
    }
}


int give_me_a_card(t_cards *h, t_cards *d, t_cards *c, t_cards *s)
{
    srand(time(NULL));
    
    int r = rand() % 4;
    printf("give_me_a_card r %d", r);
    if (r == 0)
        return chose_a_card(h);
    else if (r == 1)
        return chose_a_card(d);
    else if (r == 2)
        return chose_a_card(c);
    else if (r == 3)
        return chose_a_card(s);
    return 0;
}

int main()
{
    t_cards *hearts = malloc(sizeof(t_cards));
    t_cards *diamonds = malloc(sizeof(t_cards));
    t_cards *clubs = malloc(sizeof(t_cards));
    t_cards *spades = malloc(sizeof(t_cards));

    fill_the_cards(hearts);
    fill_the_cards(diamonds);
    fill_the_cards(clubs);
    fill_the_cards(spades);
    //23456789TJDKA

    int win_lose = 1;
    
    while(win_lose)
    {
        hand += give_me_a_card(hearts, diamonds, clubs, spades);
        if (hand == 21)
        {
            printf("Blackjack!\n");
            return 0;
        }
        else if (hand > 21)
        {
            printf("%d\n", hand);
            return 0;
        }
        printf("hand %d\n", hand);
        
    }

    //put_cards(hearts);
}