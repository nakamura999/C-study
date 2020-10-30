// 数学関数-三角関数
// sin(),cos(),tan()すべて、math.hに含まれています。
#include <stdio.h>
#include <math.h>

#define PI 3.14
// 円周率を表すPIが定義。#defineマクロはすでにファイル分割で扱いましたが、定数を定義するのにも用いることが出来る。

void main() {
    int angle;
    double rad;
    printf("角度を入力してください(0~360) :");
    scanf("%d", &angle);
    // 角度をラジアンに変換
    rad = PI * (double)angle / 180.0;
    printf("sin(%d) = %f\n",angle,sin(rad));
    // doube a = sin(2*3.14);
    printf("cos(%d) = %f\n",angle,cos(rad));
    printf("tan(%d) = %f\n",angle,tan(rad));
}