#ifndef CARD_H
#define CARD_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int hand;

typedef struct s_cards
{
    char face_cards[6];
    int number_cards[8];
} t_cards;


#endif