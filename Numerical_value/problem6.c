#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void main() {
    int n;
    srand((unsigned) time(NULL));
    for(int i = 0; i < 4; i++) {
        n = (rand() %  21) - 10;
        printf("%dつ目の数値: %d 絶対値: %d\n", i, n, abs(n));
    }
    printf("\n");
}