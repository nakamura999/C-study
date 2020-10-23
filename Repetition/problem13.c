#include <stdio.h>
#include <time.h>
#include <stdlib.h>
 
int main(void){
    int n = 0;
    int i = 1;
    srand((unsigned)time(NULL));     //(乱数の初期化)現在時刻を元に種を生成
    n = rand() % 10 + 1;
    while(i){    
       if(n % 2 == 0) {
           i++;
           printf("★");
           if(i == n) {
               printf("★");
               break;
           }
       }
       if(!(n % 2 == 0)){
           i++;
           printf("☆");
           if(i == n) {
               printf("☆");
               break;
           }
       }
    }
    printf("\n");
}