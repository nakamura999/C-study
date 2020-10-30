// 数学関数-絶対値＆平方根
#include <stdio.h>
#include <math.h>

void main() {
    int n = -2;
    double d1 = -2.5, d2 = 4.0;

    printf("%dの絶対値は%d\n",n, abs(n));
    // abs(int n);  与えられた整数の絶対値を求める。

    printf("%fの絶対値は%f\n",d1,fabs(d1));
    // fabs(double d); 与えられた実数の絶対値を求める。

    printf("%fの2乗は%fです。\n",d2,pow(d2,2));
    // pow(double x,double y); xのy乗を求める。

    printf("%fの平方根は%fです。\n",d2,sqrt(d2));
    // sqrt(double d); 与えらられた実数の平方根を求める。

}