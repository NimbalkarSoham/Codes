#include<stdio.h>
#include<math.h>
int fibonacci(int n){
    if(n==0){
        return 1;
    }
    fibonacci(n) = fibonacci(n-1) + fibonacci(n-2);
    int N = fibonacci(n);
    printf("%d\t",N);
}
int main(){
    int n;
    scanf("%d",n);
    fibonacci(n);
    return 0;
}