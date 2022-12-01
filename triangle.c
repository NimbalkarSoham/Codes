#include<stdio.h>
#include<math.h>
int main(){
    int N,i,j;
    scanf("%d",&N);
    for(i=N;i>=1;i--){
        for(j=1;j<=i;j++){
             printf(" ");
        }
        for(j=0;j<=2*(N-i);j++){
            printf("*");
        }
        for(j=i;j>1;j--)
          printf(" ");
        printf("\n");
    }
}