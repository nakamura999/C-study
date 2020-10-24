#include <stdio.h>
#include <time.h>
#include <stdlib.h>
 
int main(void){
    int data[10];
    int i;
    srand((unsigned)time(NULL));

    for(i = 0; i < 10; i++){
        data[i] = rand() % 10 + 1;
        printf("%d ",data[i]);
    }
    printf("\n");

    printf("奇数 : ");
    for(i = 0; i < 10; i++){
        if(!(data[i] % 2 == 0)) {
            printf("%d ",data[i]);
        }
    }
    printf("\n");
    
    printf("偶数 : ");
    for(i = 0; i < 10; i++){
        if(data[i] % 2 == 0) {
            printf("%d ",data[i]);
        }
    }
    printf("\n");
}