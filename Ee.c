#include <stdio.h>


int main (){
    int i,j;
    for(i=10; i>=0; i-- ){
        for(j=i; j<=10; j++){
            printf("%d ",j);
        }
        printf("\n");
    }

    for(i=1; i<=10; i++ ){
        for(j=i; j<=10; j++){
            printf("%d ",j);
        }
        printf("\n");
    }   

}