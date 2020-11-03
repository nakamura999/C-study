#include <stdio.h>
#include <stdlib.h>
 
#define SIZE    3
 
void main(){
    int* p1 = NULL;
    double *p2 = NULL;
    int i;
    //  配列の生成
    p1 = (int*)malloc(sizeof(int)*SIZE);
    p2 = (double*)malloc(sizeof(double)*SIZE);
    // malloc()、メモリを動的に確保する処理を行う関数。()内に確保したいメモリの大きさをバイト数で指定。 それに対して、メモリを解放する関数が、free()フリー関数。()内には、確保したメモリのアドレスを持つポインタを引数として与えます。
    // p= (int*)malloc(sizeof(int)*10);  malloc()関数によるメモリの確保。(pをintのポインタ変数と仮定)

    //  値の代入
    for(i = 0; i < SIZE; i++){
        p1[i] = i;
        p2[i] = i / 10.0;
    }
    //  結果の出力
    for(i = 0; i < SIZE; i++){
        printf("p1[%d]=%d  p2[%d]=%f\n",i,p1[i],i,p2[i]);
    }
    //  メモリの開放
    free(p1);
    free(p2);
}