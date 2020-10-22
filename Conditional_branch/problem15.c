#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// rand関数を使用するにはstdlib.h、time関数を使用するには、time.hを読み込む必要があるので、最初にinclude
  
int main(void){
    int n;
    srand((unsigned)time(NULL));     //(乱数の初期化)現在時刻を元に種を生成
    n = rand() % 100 + 1;
    printf("点数：%d\n",n);
    if(80 <= n) {
        printf("優\n");   
    } else if(80 > n && 70 <= n){
        printf("良\n");
    } else if(70 > n && 60 <= n){
        printf("可\n");
    } else if (n < 60) {
        printf("不可\n");
    }
}