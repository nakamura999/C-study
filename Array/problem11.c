#include <stdio.h>
#include <time.h>
#include <stdlib.h>
 
int main(void){
    int data[5];
    int i;
    srand((unsigned)time(NULL));

    for(i = 0; i < 5; i++){
        data[i] = rand() % 100 + 1;
        printf("%d ",data[i]);
    }
    printf("\n");

    printf("0以上60未満の数 : ");
    for(i = 0; i < 5; i++){
        if(0 <= data[i] && data[i] < 60) {
            printf("%d ",data[i]);
        }
    }
    printf("\n");
    
    printf("60以上80未満の数 : ");
    for(i = 0; i < 5; i++){
        if(60 <= data[i] && data[i] < 80) {
            printf("%d ",data[i]);
        }
    }
    printf("\n");

    printf("80以上の数 : ");
    for(i = 0; i < 5; i++){
        if(80 <= data[i]) {
            printf("%d ",data[i]);
        }
    }
    printf("\n");
}