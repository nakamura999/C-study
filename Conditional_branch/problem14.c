#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// rand関数を使用するにはstdlib.h、time関数を使用するには、time.hを読み込む必要があるので、最初にinclude
  
int main(void){
    int a;
    int b;
    srand((unsigned)time(NULL));     //(乱数の初期化)現在時刻を元に種を生成
    a = rand() % 10 + 1;
    b = rand() % 10 + 1;
    printf("数値a：%d\n",a);
    printf("数値b：%d\n",b);
    if(a > b) {
        printf("aの方が大きいです。\n");   
    } else  if(b > a) {
        printf("bの方が大きいです。\n");
    } else {
        printf("等しいです。\n");
    }
}