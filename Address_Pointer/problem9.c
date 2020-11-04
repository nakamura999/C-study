// 入力された文字列のなかで文字数が最大なものを表示
#include <stdio.h>
#include <string.h>
 
void main(){
   char s1[256],s2[256],s3[256];
   int len1,len2,len3;
   int max;

   printf("文字列1 : ");
   scanf("%s",s1);
   printf("文字列2 : ");
   scanf("%s",s2);
   printf("文字列3 : ");
   scanf("%s",s3);
   
   len1 = strlen(s1);
   len2 = strlen(s2);
   len3 = strlen(s3);

   max = len1;

   if(max < len2){
       max = len2;
   }
   if(max < len3){
       max = len3;
   }

   printf("最も長い文字列は : \n");
   if(max == len1) {
       printf("%s\n", s1);
   }
   if(max == len2) {
       printf("%s\n", s2);
   }
   if(max == len3) {
       printf("%s\n", s3);
   }
}