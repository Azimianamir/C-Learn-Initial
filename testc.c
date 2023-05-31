#include <stdio.h>

int main()
{
    int begin;
    int end;
    printf("Enter Begin:");
    scanf("%d", &begin);
    printf("Enter End:");
    scanf("%d", &end); 
    
    int i = begin;

    while(i<=end)

    {
        printf("Number: %d\n", i);
        i++;
    }

    return 0;


}