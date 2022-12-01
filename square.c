#include<stdio.h>
#include<math.h>
int main(){
    int N;
    printf("enter side length");
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        printf("* ");
    }
    printf("\n");
    for(int i=1;i<=N-2;i++){
        for(int j=1;j<=N;j++){
            if(j==1||j==N){printf("* ");}
            else printf("  ");
        }
        printf("\n");
    }
    for(int i=1;i<=N;i++){
        printf("* ");
    }
}