#include <stdio.h>
#include <string.h>
 
void main(){
   char s[10];
   int len;
   //   文字列のコピー strcpy()	strcpy(char* s1,char* s2); 右辺の文字列を左辺の文字列変数にコピーする。
   strcpy(s,"ABC");
   printf("s=%s\n",s);
   //   文字列の結合 strcat() strcat(char* s1,char* s2); 右辺の文字列を左辺の文字列変数に追加する。
   strcat(s,"DEF");
   printf("s=%s\n",s);
   //   文字列の長さ strlen() strlen(char* s); ()に文字列を与えると、戻り値として長さを得られる。
   len = strlen(s);
   printf("文字列の長さ：%d\n",len);
}