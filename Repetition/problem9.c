#include <stdio.h>
#include <time.h>
#include <stdlib.h>
 
int main(void){
    int n = 0;
    srand((unsigned)time(NULL));     //(乱数の初期化)現在時刻を元に種を生成
    while(1){ 
       n = rand() % 100 + 1;   
       printf("%d\n",n);
       if(n % 10 == 0){
           printf("終了します\n");
           break;
       }
    }
}