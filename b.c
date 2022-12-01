#include<stdio.h>
int main()
{
int rem , n;
scanf("%d",&n);
while(n!=0){
rem=n%2;
n=n/2;
printf("%d",rem);
};return 0;
}