#include <stdio.h>
#include <stdlib.h>

#define SIZE 10
  
void main(){
    //  数値配列代入用のポインタ変数
    int *array = NULL;
    int i;
    array = (int*)malloc(sizeof(int)*SIZE);
    //  ①長さ10の配列の生成(mallocを使用）
    for(i = 0; i < 10; i++){
        array[i] = i;   //  値の代入
    }
    //  値の表示
    for(i = 0; i < 10; i++){
        printf("%d ",array[i]); //  値の代入
    }
    printf("\n");
    //  ②生成したメモリの開放(free()を使用)
}