#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// rand関数を使用するにはstdlib.h、time関数を使用するには、time.hを読み込む必要があるので、最初にinclude
  
int main(void){
    int n;
    srand((unsigned)time(NULL));     //(乱数の初期化)現在時刻を元に種を生成
    n = rand() % 46 - 10;
    printf("摂氏：%d度\n",n);
    if(30 <= n) {
        printf("真夏日です。\n");   
    } else if(25 <= n && n < 30) {
        printf("夏日です。\n");
    } else if(n < 0){
        printf("真冬日です。\n");
    }
}