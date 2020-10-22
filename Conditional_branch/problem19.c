#include <stdio.h>

void main() {
    int a;
    printf("西暦を入力 : ");
    scanf("%d",&a); // キーボーから整数を入力
    if(a % 400 == 0) {
        printf("閏年。\n");
    } else if(a % 100 == 0) {
        printf("閏年ではありません。\n");
    } else if(a % 4 == 0) {
        printf("閏年。\n");
    } else {
        printf("閏年ではありません。\n");
    }
}