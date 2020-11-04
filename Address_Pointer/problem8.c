// 文字列を整数に変更
#include <stdio.h>
#include <stdlib.h>
  
int main(void){
    char numString[] = "100";   //  数値の文字列
    int num = atoi(numString);    //  numStringの数値を入れる変数
    /**
        numStringを整数値に変換し、numに代入
    **/
    printf("%d\n",num);
}