#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
    int n;
    int max = 0;
    int min = 10;
    srand((unsigned) time(NULL));
    for(int i = 0; i < 5; i++) {
        n = rand() % 10 + 1;
        printf("%d ", n);

        if(n >= max) {
            max = n;
        }
        if(n <= min) {
            min = n;
        }
    }
    printf("\n");
    printf("最大値 : %d\n",max);
    printf("最小値 : %d\n",min);
}