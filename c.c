#include<stdio.h>
int add(int n){
    if(n!=0)
    return n+add(n-1);
    else 
    return n;
}
int main(){
    int n;
    printf("enter number\n");
    scanf("%d",&n);
    printf("%d",add(n));
    return 0;
}