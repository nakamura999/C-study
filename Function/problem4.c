#include <stdio.h>

void numjudge(int);
  
void main(){
    int a;
    printf("整数値を入力してください：");
    scanf("%d",&a);
    numjudge(a);
}

void numjudge(int n) {
        if(n == 0){
        printf("0です\n");
    }else if(n % 2 == 0){
        printf("偶数です\n");
    }else{
        printf("奇数です\n");
    }
}