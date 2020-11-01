#include <stdio.h>
// C言語には、アドレスを入れることを前提とした変数が存在します。それをポインタ変数もしくは、単にポインタと言う。
// 先頭に*をつけると、その変数がポインタ変数であることを示す

void show(int,int,int);
 
void main(){
    int a = 100;    //  整数型変数a
    int b = 200;    //  整数型変数b
    int *p = NULL;  //  整数型のポインタ変数p ポインタ変数pにNULL(ヌル)を入れて初期化
    p = &a; //  pにaのアドレスを代入
    show(a,b,*p);
    *p = 300;   //  *pに値を代入
    show(a,b,*p);
    p = &b; //  pにbのアドレスを代入
    show(a,b,*p);
    *p = 400;   //  *pに値を代入
    show(a,b,*p);
}
 
void show(int n1,int n2,int n3){
    printf("a = %d b = %d *p = %d\n",n1,n2,n3);
}