#include <stdio.h>
#include <time.h>
#include <stdlib.h>
 
int main(void){
    int data[5];
    int i;
    srand((unsigned)time(NULL));

    for(i = 0; i < 5; i++){
        data[i] = rand() % 10 + 1;
        printf("%d ",data[i]);
    }
    printf("\n");

    for(i = 0; i < 5; i++){
        for(int d = 0; d < data[i]; d++) {
            printf("*");
        }
        printf("\n");
    }
}