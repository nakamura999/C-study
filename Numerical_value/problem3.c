#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
    int a[5];
    int n1 = 0, n2 = 0, n3 = 0;
    srand((unsigned) time(NULL));
    for(int i = 0; i < 5; i++) {
        a[i] = rand() % 100 + 1;
        printf("a[%d]=%d ", i,a[i]);

        if(a[i] >= 20 && 50 >= a[i]) {
            n1++;
        } else if(80 < a[i]) {
            n2++;
        } else if(0 <= a[i] && 10 > a[i]){
            n3++;
        }
    }
    printf("\n");
    printf("20以上50以下の数 : %d\n", n1);
    printf("80より大きい数 : %d\n", n2);
    printf("0以上10未満の数 : %d\n", n3);
}