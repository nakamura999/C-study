#include <stdio.h>
#include <time.h>
#include <stdlib.h>
 
int main(void){
    int n = 0;
    int min = 100;
    srand((unsigned)time(NULL));     //(乱数の初期化)現在時刻を元に種を生成
    for(int i = 1; i <= 5; i++){ 
       n = rand() % 100 + 1;   
       printf("%d\n",n);
       if(n <= min) {
           min = n;
       }
    }
    printf("最小値 : %d\n",min);
}