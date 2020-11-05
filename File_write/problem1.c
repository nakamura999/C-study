#include <stdio.h>
#include <stdlib.h>
 
void main() {
    FILE *file;

    file = fopen("HelloWorld.txt", "w");

    if (file == NULL) {
        printf("ファイルが開けません。\n");
        exit(1);
    }

    fprintf(file,"Hello World.\r\n");       // ファイルに書く
    fclose(file);                       // ファイルをクローズ(閉じる)
}