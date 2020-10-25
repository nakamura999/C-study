#include <stdio.h>
  
//  関数のプロトタイプ宣言
int add(int,int);
int sub(int,int);
 
void main(){
    int a,b;
    int result;
    int hiku;
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    result = add(a,b);
    hiku = sub(a,b);
    printf("%d + %d = %d\n",a,b,result);    //  計算結果を出力
    printf("%d - %d = %d\n",a,b,hiku);
}
 
//  二つの整数の和を求める関数
int add(int n1,int n2){
    return n1 + n2;
}

int sub(int s1,int s2) {
    return s1 - s2;
}