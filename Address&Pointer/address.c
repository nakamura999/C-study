#include <stdio.h>
 
void main(){
    int a = 100;        //  int型の変数
    double b = 123.4;   //  double型の変数
    float c = 123.4f;   //  float型の変数(数値の後ろにfつける)
    char d = 'a';       //  char型の変数
    printf("aの値は%d、大きさは%dbyte、アドレスは0x%x\n",a,sizeof(int),&a);
    // &aとすることに より、変数のアドレスを取得することができる(変数はコンピュータのメモリ中にあるため、アドレスが存在する)
    printf("bの値は%f、大きさは%dbyte、アドレスは0x%x\n",b,sizeof(double),&b);
    printf("cの値は%f、大きさは%dbyte、アドレスは0x%x\n",c,sizeof(float),&c);
    printf("dの値は%c、大きさは%dbyte、アドレスは0x%x\n",d,sizeof(char),&d);
    // sizeof(サイズオブ)演算子は、変数や型のメモリのサイズを取得する演算子
}