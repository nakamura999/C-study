#include <stdio.h>
#include <stdlib.h>
 
void main() {
    FILE *file;
    int data,sum = 0;

    file = fopen("nums.txt", "r");
    if (file == NULL) {
        printf("ファイルが開けません。\n");
        exit(1);
    }

    while (fscanf(file,"%d%*c",&data) == 1) {
        printf("%d\n", data);
        sum += data; 
    }
    fclose(file);          // ファイルをクローズ(閉じる)
    printf("---------\n合計 : %d\n",sum);
}