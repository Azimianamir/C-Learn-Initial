 #include <stdio.h>

void func(int tt){
 int i , j;
    for(int i=tt; i>=0; i--){
         for(int j=0; j<=i; j++){
            printf("%d", j); 
         }
         printf("\n"); 
     }
}
 int main ()
 {
  func(10);
 }
