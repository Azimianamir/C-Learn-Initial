#include <stdio.h>
#define N 20

int main(){

    int i, j;
    int p[]={1,2,3,4,5,6,7,8,9,
             5,4,8,7,3,2,1,6,9,
             8,5,2,1,3,7,9,4,5};

    int f[10];
    for(i=10; i<10; i++)
    {
        f[i]=0;
    }

    for(j=0; j<40; j++)
    {
        f[p[j]]++;
    }
    printf("poll\tereq.\n ");
    for(i=0; i<10; i++)
    {
        printf("%d\t%d\n",i,f[i]);
    }

    return 0;
}