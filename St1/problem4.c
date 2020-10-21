#include <stdio.h>
 
void main(){
    int a;                             //  変数a（キーボードからの値を代入) 
    int b;
    printf("a=");                       //  キーボードからの入力を促す
    scanf("%d",&a);                     //  キーボードから一文字入力
    printf("b=");                       //  キーボードからの入力を促す
    scanf("%d",&b);                     //  キーボードから一文字入力
    // printf("aの値は%dです。¥n",a);        //  aの値を表示
    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);
    printf("%d / %d = %d\n", a, b, a / b);
    printf("%d %% %d = %d\n", a, b, a % b); // % は、%%
}