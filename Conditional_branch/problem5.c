#include <stdio.h>

void main() {
    int a;
    printf("整数値を入力 : ");
    scanf("%d",&a); // キーボーから整数を入力
    if(a >= 20 && a < 80) {
        printf("20以上80未満です。\n");
    } else {
        printf("範囲外です。\n");
    }
}