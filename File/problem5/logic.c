#include <stdio.h>
#include "logic.h"
#include <time.h>
#include <stdlib.h>

//  コンピュータの手
int player;
//  プレイヤーの手
int computer;

void init() {
    srand((unsigned) time(NULL));
}

void setPlayer(int num) {
    player = num;
}

void setComputer() {
    computer = rand() % 3;
}