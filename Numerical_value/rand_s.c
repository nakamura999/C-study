// c言語　乱数
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
    int a, b;
    // 乱数の初期化
    srand((unsigned) time(NULL));

    // 1~10までの乱数
    a = rand() % 10 + 1;
    b = rand() % 10 + 1;
    // 計算結果
    printf("%d + %d = %d\n",a,b,a+b);

    // 1からnまでの乱数をえる方法  rand() % n + 1
    // 0からnまでの乱数をえる方法  rand() % (n + 1)
}