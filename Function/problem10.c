#include <stdio.h>

int x,tmp;
int r;

int gcd(int,int);
int lcm(int,int);
  
void main(){
    int a,b;
    int max;
    int min;
    printf("一つ目の値を入力してください : ");
    scanf("%d",&a);
    printf("2つ目の値を入力してください : ");
    scanf("%d",&b);
    max = gcd(a,b);
    min = lcm(a,b);
    printf("2つの最大公約数は、%dです。\n",gcd);
    printf("2つの最小公約数は、%dです。\n",lcm);
}

// 最大公約数
int gcd(int s1,int s2) {
    if(s1 == 0 || s2 == 0){
        fprintf(stderr, "引数エラーです。\n");
        return 0;
    }
    // ユークリッドの互除法
    while((r = s1 % s2) != 0){
        s1 = s2;
        s2 = r;
    }
    return s2;
}

// 最小公約数
int lcm(int n1,int n2){
    x = n1 * n2;
    if(n1<n2){
        tmp = n1;
        n1 = n2;
        n2 = tmp;
    }
    r = n1 % n2;
    while(r != 0){
        n1 = n2;
        n2 = r;
        r = n1 % n2;
    }
    return x / n2;
}