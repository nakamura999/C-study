#include <stdio.h>
#include <time.h>
#include <stdlib.h>
 
int main(void){
    int data[5];
    int i;
    int sum = 0;
    int avg = 0;
    srand((unsigned)time(NULL));

    for(i = 0; i < 5; i++){
        data[i] = rand() % 10 + 1;
        printf("%d ",data[i]);
        sum += data[i];
        avg = sum / 5;
    }
    printf(" \n");

    printf("合計値 : %d\n",sum);
    printf("平均値 : %d\n",avg);

    printf("平均値より大きい数 : ");
    for(i = 0; i < 5; i++){
        if(avg < data[i]) {
            printf("%d ",data[i]);
        }
    }
    printf(" \n");
    printf("平均値より小さい数 : ");
    for(i = 0; i < 5; i++){
        if(avg > data[i]) {
            printf("%d ",data[i]);
        }
    }
    printf(" \n");
}