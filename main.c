#include "card.h"


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