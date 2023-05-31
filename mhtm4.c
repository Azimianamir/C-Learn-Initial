#include <stdio.h>

int main()
{
    int begin;
    int end;
    printf("Enter Begin:");
    scanf("%d", &begin);
    printf("Enter End:");
    scanf("%d", &end);
    int i;
    for(i=begin; i<=end; i++)
    {
        printf("Number: %d\n", i);
    }

    return 0;


}
10