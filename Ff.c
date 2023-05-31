#include <stdio.h>

int main(){
    int i ,j ,p;
    for(i=20; i>=0; i--){
     if(i>=10){
          for(j=i-10; j<=10; j++){

                printf("%d ",j);
     }
 }

        else{
            int k =i-10;
            for(j=10-i; j<=10; j++){

                printf("%d ",j);
            }
        }
            printf("\n");
}
}