#include <stdio.h>
int main (){
    int i, j;
    for(i=10; i>=0; i--){
        for(j=10; j>=i; j--){
            printf("%d ",j);
        }
            printf("\n");
    }

    for (i=9; i>=0; i--){
        for(j=10; j>=10-i; j--){
            printf("%d ",j);
        }
        printf("\n");
    }
}



