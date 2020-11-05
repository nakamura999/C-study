#include <stdio.h>
#include <stdlib.h>
 
void main() {
    FILE *file;                                     // ファイルポインタ（出力用）
    file = fopen("sample.txt", "w");      // ファイルを書き込み用にオープン(開く)
    if (file == NULL) {                             // オープンに失敗した場合
        printf("ファイルが開けません。\n");            // エラーメッセージを出して
        exit(1);                                    // 異常終了
    }
    // fprintf() fprintf(ファイルポインタ,書き込み文字列,変数・・・); 文字列をファイルに書き込む
    //  ファイルにデータを書き込む
    // 改行コードは「\n」ではなく、「\r\n」と2文字 
    fprintf(file,"Hello World.\r\n");       // ファイルに書く
    fprintf(file,"ABCDEF\r\n");
    fclose(file);                       // ファイルをクローズ(閉じる)
}