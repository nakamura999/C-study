int main(void){
   int i;
   int j;
   for(i = 1; i <= 10; i++){
       for(j = 1; j <= 10; j++) {
           printf((i<j)?"□ ":"■ ");
       }
       printf("\n");
   }
   return 0;
}