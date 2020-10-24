#include <stdio.h>
 
void main()
{
    double d[] = { 1.2, -1.3, 5.2, 4.8 };
    int i;
    for(i = 0; i < 4; i++){
        printf("n[%d]=%.1f ",i,d[i]);
        // %.●f 小数点以降の桁指定
    }
    printf("\n");
}