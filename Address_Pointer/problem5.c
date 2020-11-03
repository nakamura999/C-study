#include <stdio.h>
#include <string.h>
 
void main(){
   char s[10];
   char a[256],b[256];

   printf("文字列1 : ");
   scanf("%s",a);
   strcpy(s,a);
   printf("\n");

   printf("文字列2 : ");
   scanf("%s",b);
   strcat(s,b);
   printf("\n");

   printf("結合した結果：\n");
   printf("%s",s);
   printf("\n");
}