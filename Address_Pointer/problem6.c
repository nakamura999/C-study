// 2つの入力された文字列が同じか異なるか判別①
#include <stdio.h>
#include <string.h>
 
void main(){
   char s1[256],s2[256];
   printf("文字列1 : ");
   scanf("%s",s1);
   printf("文字列2 : ");
   scanf("%s",s2);
   // strcmp() strcpy(char* s1,char* s2); 文字列s1,s2が等しいと0、等しくなければそれ以外の値を返す。
   if(strcmp(s1,s2)==0){
       printf("同じものです\n");
   }else{
       printf("異なるものです\n");
   }
}