#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// rand関数を使用するにはstdlib.h、time関数を使用するには、time.hを読み込む必要があるので、最初にinclude
  
int main(void){
    int n;
    srand((unsigned)time(NULL));     //(乱数の初期化)現在時刻を元に種を生成
    n = rand() % 10 + 1;
    printf("数値：%d\n",n);
    if(n >= 5) {
        printf("5以上です。\n");   
    } else {
        printf("5未満です。\n");
    }
}