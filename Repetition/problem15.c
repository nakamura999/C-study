void main(){
   int a;
   int b;
   for(a = 1; a <= 9; a++){
       for(b = 1; b <= 9; b++) {
            printf("%d*%d=%d ",b,a,a*b);            
       }
       printf("\n");
   }
}