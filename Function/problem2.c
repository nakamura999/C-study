#include <stdio.h>
  
//  関数のプロトタイプ宣言
int mul(int,int,int);
 
void main(){
    int a,b,c;
    int result;
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    printf("c=");
    scanf("%d",&c);
    result = mul(a,b,c);
    printf("%d * %d * %d = %d\n",a,b,c,result);    //  計算結果を出力
}
 
int mul(int n1,int n2,int n3){
    return n1 * n2 * n3;
}