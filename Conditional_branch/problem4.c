#include <stdio.h>

void main() {
    int a;
    printf("整数値を入力 : ");
    scanf("%d",&a); // キーボーから整数を入力
    if(a <= 10 || a >= 90) {
        printf("10以下か90以上の値です。\n");
    } else {
        printf("範囲外です。\n");
    }
}