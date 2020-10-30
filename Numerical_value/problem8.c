#define _CRT_SECURE_NO_WARNINGS
// VC++ only, to stop warning for fopen(), scanf() etc.

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void){
    char *p,chs[80];
    // char 配列名[文字列サイズ];
    // char *(ポインタ名) = “文字列”; ポインタとは、変数のアドレスを記憶する変数

    printf("Input words:");
    p = fgets(chs,80,stdin);
    // fgets ストリーム(stream)から1行単位で文字列を読み取ります。 
    // chsデータを格納する文字配列, 80配列の長さ, stdin は「標準入力」に対応したファイルポインタ

    while(*p){
        //putcher 標準出力 (standard output) に指定した文字を書き込む
        // tolower 英大文字への変換
        putchar(toupper(*p));
        p++;
    }
    return 0;
}