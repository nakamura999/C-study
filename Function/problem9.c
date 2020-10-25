#include <stdio.h>

void square(int,int);
  
void main(){
    int a,b;
    printf("縦 : ");
    scanf("%d",&a);
    printf("横 : ");
    scanf("%d",&b);
    square(a,b);
}

void square(n1,n2){
    if(n1 <= 0 || n2 <= 0) {
        printf("\n");;
    } else {
        for(int i = 1; i <= n1; i++){
            for(int j = 1; j <= n2; j++) {
                printf("■ ");
            }
            printf("\n");
        }
    }
}