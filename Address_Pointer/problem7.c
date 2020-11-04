// 2つの入力された文字列が同じか異なるか判別②
#include <stdio.h>
 
void main(){
   char s1[10],s2[10];
   int i = 0, flag;

   printf("文字列1 : ");
   scanf("%s",s1);
   printf("文字列2 : ");
   scanf("%s",s2);

   while(s1[i] != '\0' && s2[i] != '\0') {
       // \0（null）文字
       if(s1[i] != s2[i]) {
           flag = 1;
           break;
       }
       i++;
   }

   if(flag == 1){
       printf("異なるものです\n");
   }else{
       printf("同じものです\n");
   }
}