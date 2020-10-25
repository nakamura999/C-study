#include <stdio.h>

int get_absolute(int);
  
void main(){
    int a;
    int abusolute_value;
    printf("数値を入力してください : ");
    scanf("%d",&a);
    abusolute_value = get_absolute(a);
    printf("%d\n", abusolute_value);
}

int get_absolute(n){
    if(n >= 0) {
        return n;
    } else {
        return n - (2 * n);
    }
}