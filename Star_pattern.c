#include<stdio.h>
#include<math.h>
int main(){
    int N,j=0;
    scanf("%d",&N);
    for(int I=2;I<N;I++){
        if(N%I==0){
            j++;
        }
    }if (j==0)
    {
        printf("prime number");
    }
    else
    {
        printf("not a prime number");
    }
    
}