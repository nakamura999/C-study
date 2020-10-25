#include <stdio.h>

int i;

void stars(int);
  
void main(){
    int n;
    printf("表示する回数を入力してください:");
    scanf("%d",&n);
    stars(n);
}

void stars(int c) {
    if(c > 0){
        for(i = 0; i < c; i++){
            printf("★");
        }
        printf("\n");
    }else{
        printf("0より大きい値を入力してください。\n");
    }
}