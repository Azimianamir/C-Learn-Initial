#include <stdio.h>
int fibo(int n);

int main()
{
    int c;
    c = fibo(7);
    printf("********* %d", c);
    return 0 ;
}

int Zarb(){
    int num1,num2,product;
	printf("Enter two numbers:");
	scanf("%d %d",&num1,&num2);
	product=num1*num2;
	printf("Product of two numbers: %d",product);
	return  0
      
}

int fibo(int n){
    int _1last = 1;
    int _2last = 0;
    if(n == 1){
        return 1;
    }
    else if(n == 0){
        return 0;
    }
    else{
        int Fn;
        int i = 0;
        for(i=2; i<=n; i++){
            Fn = _1last + _2last;
            _2last = _1last;
            _1last = Fn;
        }
        return Fn;
    }
 }