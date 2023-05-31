#include <stdio.h>


int main (){
    int i,j;
    for(i=10; i>=0; i-- ){
        for(j=i; j<=10; j++){
            printf("%d ",j);
        }
        printf("\n");
    }

    for(i=10; i>=0; i-- ){
        for(j=11-i; j<=10; j++){
            printf("%d ",j);
        }
        printf("\n");
    }   

}