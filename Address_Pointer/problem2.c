#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define SIZE 5

int bai(int*);

void main(){
    int a[SIZE];
    int i;
    srand((unsigned)time(NULL));

    printf("発生した乱数 : \n");
    for( i = 0 ; i < 5; i++){
        a[i] = rand() % 10 + 1;
        printf("%d ",a[i]);
    }
    printf("\n");
    printf("２倍した値 : \n");
    for( i = 0 ; i < 5; i++){
        int p = bai(&a[i]);
        printf("%d ",p);
    }
    printf("\n");
}

int bai(int* p){
    return *p * 2;
}