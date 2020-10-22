#include <stdio.h>
 
void main()
{
    int a;  // 変数の宣言
    int b = 3;      //  初期化と代入を同時に行う。
    int add,sub;    //  複数の変数を同時に宣言
    double avg;     //  int以外の変数を宣言
    a = 6;  //  代入（最初に値を入れる。”初期化”
    add = a + b;            //  a,bの和。
    sub = a - b;            //  a,bの差。
    avg = (a + b) / 2.0;    //  a,bの平均値。
    printf("%d + %d = %d\n",a,b,add);
    printf("%d - %d = %d\n",a,b,sub);
    printf("%dと%dの平均値：%f\n",a,b,avg);
}