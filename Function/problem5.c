#include <stdio.h>

int result;

void max(int, int);
  
void main(){
    int a,b;
    printf("1つ目の値を入力してください:");
    scanf("%d",&a);     //  1つ目の数、aを入力
    printf("2つ目の値を入力してください:");
    scanf("%d",&b);     //  2つ目の数、bを入力
    max(a,b);
    printf("%dと、%dのうち、大きい値は%dです。\n",a,b,result);
}

void max(int n1, int n2) {
    if(n1 > n2){
        result = n1; //  n1のほうが大きければ、aをresultに代入
    }else{
        result = n2; //  n2のほうが大きければ、bをresultに代入
    }
}