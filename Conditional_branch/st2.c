#include <stdio.h>

void main() {
    int a;
    printf("数値を入力 : ");
    scanf("%d",&a); // キーボーから整数を入力
    if(a > 0) {
        printf("入力した値は、正の数です。\n");
    } else {
        printf("入力しおた値は、正の数ではありません。\n");
    }
}