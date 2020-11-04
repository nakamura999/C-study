// 入力された文字列を逆の文字列にして出力
#include <stdio.h>
#include <string.h>
 
int main(void){
   char s[16];
   int i;

   printf("文字列を入力(最大16文字) : ");
   scanf("%s",s);
   
   for(i = strlen(s); i >= 0; i--) {
       printf("%c",s[i]);
   }
   printf("\n");
   return 0;
}