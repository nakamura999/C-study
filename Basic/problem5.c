#include <stdio.h>
 
void main(){
    int x;
    int y;
    printf("長方形の幅：");
    scanf("%d",&x);
    printf("長方形の高さ：");
    scanf("%d",&y);
    printf("長方形の面積は、%dm2です。\n", x * y);
}