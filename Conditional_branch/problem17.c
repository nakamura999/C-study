#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// rand関数を使用するにはstdlib.h、time関数を使用するには、time.hを読み込む必要があるので、最初にinclude
  
int main(void){
    int n;
    srand((unsigned)time(NULL));     //(乱数の初期化)現在時刻を元に種を生成
    n = rand() % 100 + 1;
    printf("値：%d\n",n);
    if(n <= 50 && n % 2 == 0) {
        printf("50以下の偶数です。\n");   
    } else if(n % 2 == 0){
        printf("偶数です。\n");
    } else if(n <= 50){
        printf("50以下です。\n");
    } else {
        printf("51以上の奇数です。\n");
    }
}