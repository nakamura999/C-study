#include <stdio.h>
#include <time.h>
#include <stdlib.h>
 
int main(void){
    int data[3][3];
    int a,b;
    int max = 0;
    int min = 9;
    srand((unsigned)time(NULL));

    for(a = 0; a < 3; a++){
        for(b = 0; b < 3; b++) {
            data[a][b] = rand() % 9 + 1;
            printf("%d ",data[a][b]);
            if(data[a][b] >= max) {
                max = data[a][b];
            }
            if(data[a][b] <= min) {
                min = data[a][b];
            }
        }
        printf("\n");
    }
    printf("最大値 : %d\n", max);
    printf("最小値 : %d\n", min);
}