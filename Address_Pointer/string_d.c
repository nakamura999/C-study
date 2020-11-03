#include <stdio.h>
#include <string.h>
 
void main(){
   char s1[256],s2[256];
   int a = 100,b = 200;
   sprintf(s1,"%d",a);
   sprintf(s2,"bの値は%dです。",b);
   // sprintf()関数は、printf()と同じ要領で文字列を作成できる関数
   puts(s1);
   puts(s2);
}