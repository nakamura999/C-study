#include <stdio.h>

void main() {
    int a;
    printf("整数値を入力 : ");
    scanf("%d",&a); // キーボーから整数を入力
    if(!(a == 1)) {
        printf("１ではありません。\n");
    } else {
        printf("1です。\n");
    }
}