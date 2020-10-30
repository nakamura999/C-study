#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
    int n;
    srand((unsigned) time(NULL));
    for(int i = 0; i < 5; i++) {
        n = rand() % 10 + 1;
        printf("%d ", n);
    }
    printf("\n");
}