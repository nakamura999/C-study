#include <stdio.h>
#include <stdlib.h>
 
void main(){
   char s1[] = "1000";
   char s2[] = "12.345";
   int a;
   double b;
   a = atoi(s1);
   // atoi() atoi(char* s); 与えられた文字列を整数(int)に変える。
   b = atof(s2);
   // atof() atof(char* s); 与えられた文字列を実数(double)に変える。
   printf("a=%d b=%f\n",a,b);
}