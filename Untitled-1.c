#include<stdio.h>
#include<math.h>
int main(){
    int sum=0 ,no_of_digits=0, N,U;
    printf("Enter the Number\n");
    scanf("%d",&N);
    while (N!=0)
    {
        N=N/10;
        no_of_digits++;
    }
    printf("Enter the Number\n");
    scanf("%d",&N);
    while(N!=0){
        U=N%10;
        N=N/10;
        sum=sum + pow(U,no_of_digits);
    }
    printf("Enter the Number\n");
    scanf("%d",&N);
    (sum==N)?  printf("%d is an Armstrong Number",N) : printf("%d is not an Armstrong Number",N);
    return 0;
}
