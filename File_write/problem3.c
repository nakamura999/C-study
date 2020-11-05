#include <stdio.h>
#include <stdlib.h>
#include<string.h>
 
int main(void) {
    FILE *file;
    char line[256];
    char q[256] = "q";

    file = fopen("data.txt", "w");

    if (file == NULL) {
        printf("ファイルが開けません。\n");
        exit(1);
    }

    while(!(strcmp(line,q)==0)) {
        printf("文字列を入力してください：");
        scanf("%s",line);
        if(strcmp(line,q)==0) {
            fclose(file);                       // ファイルをクローズ(閉じる)
            break;
        } else {
            fprintf(file,"%s\r\n",line);       // ファイルに書く
        }
    }
}