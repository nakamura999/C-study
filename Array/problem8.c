#include <stdio.h>
#include <time.h>
#include <stdlib.h>
 
int main(void){
    int data[5];
    int i;
    int o = 0;
    int s = 0;
    int zero = 0;
    srand((unsigned)time(NULL));

    for(i = 0; i < 5; i++){
        data[i] = rand() % 21 -10;
        printf("%d ",data[i]);
        if(0 < data[i]) {
             o += 1;
        }
        if(0 > data[i]) {
             s += 1;
        }
        if(0 == data[i]) {
             zero += 1;
        }
    }
    printf(" \n");

    printf("0より大きい数 : %d", o);
    printf(" \n");

    printf("0より小さい数 : %d", s);
    printf(" \n");

    printf("0の個数 : %d", zero);
    printf(" \n");
}