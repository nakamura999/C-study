#include <stdio.h>

void main() {
    int a;
    printf("整数値を入力 : ");
    scanf("%d",&a); // キーボーから整数を入力
    if(a >= 5) {
        printf("5以上です。\n");
    }
}