#include <stdio.h>

int main ()
{    
    // int n=10;
    // int i , s , a;

    // s=0;

    // for (i=10; i>0; i--)
    // {
    //     printf("enter a number:");
    //     scanf("%d", &a);
    //     s+=a;
    // }
    // printf("\njam hame = %d ",s);


    // printf("*\n"); 
    // printf("**\n"); 
    // printf("***\n"); 
    // printf("****\n"); 
    // printf("*****\n"); 
    // printf("******\n"); 
    // printf("*******\n"); 
    // printf("********\n"); 

    // for(int i=0; i<10; i++){
    //     for(int j=0; j<=i; j++){
    //         printf("%d", j); 
    //     }
    //     printf("\n"); 
    // }


    int i = 0;
    while(i<10){
        int j = 0;
        while(j<i){
            printf("%d", j); 
            j++;
        }
        printf("\n"); 
        i++;
    }

}
