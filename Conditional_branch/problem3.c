#include <stdio.h>

void main() {
    int a;
    printf("整数値を入力 : ");
    scanf("%d",&a); // キーボーから整数を入力
    if(a < 50) {
        printf("50未満です。\n");
    } else {
        printf("50以上です。\n");
    }
}