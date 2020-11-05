#include <stdio.h>
#include <stdlib.h>

#define SIZE    256

void main() {
    FILE *file;
    char line[SIZE];
    line[0] = '\0';

    file = fopen("problem2.txt", "r");

    if (file == NULL) {
        printf("ファイルが開けません。\n");
        exit(1);
    }

    //  ファイルのデータ読み込む
    // fgets() fgets(文字列,文字列サイズ,ファイルポインタ); 指定したサイズの文字列をファイルから読み込む。
    while ( fgets(line, SIZE, file) != NULL ) {
        printf("%s", line);
    }
    fclose(file);          // ファイルをクローズ(閉じる)
}