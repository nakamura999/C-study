void main(){
   int a;
   int b;
   for(a = 1; a <= 9; a++){
       for(b = 1; b <= 9; b++) {
           if(b % 9 == 0){
               printf("%d*%d=%d \n",b,a,a*b);            
           } else {
               printf("%d*%d=%d ",b,a,a*b);
           }
       }
   }
}