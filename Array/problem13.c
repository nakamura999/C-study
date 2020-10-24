#include <stdio.h>
#include <time.h>
#include <stdlib.h>
 
int main(void){
    int data[3][3];
    int a,b;
    srand((unsigned)time(NULL));

    for(a = 0; a < 3; a++){
        for(b = 0; b < 3; b++) {
            data[a][b] = rand() % 9 + 1;
            printf("%d ",data[a][b]);
        }
        printf("\n");
    }
}