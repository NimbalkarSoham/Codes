#include<stdio.h>
#include<math.h>
int add(int n){
    if(n==0){return 0;}
    else{
    int sum=0;
    sum=n+add(n-1);
    return sum;}
}
int main(){
int n;
scanf("%d",&n);
printf("sum of %d natural numbers is %d",n,add(n));
return 0;
}