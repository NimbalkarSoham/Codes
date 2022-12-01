#include<stdio.h>
#include<math.h>
int main(){
    int ul,ll,j;
    printf("Enter range of numbers\n");
    printf("Enter lower limit\n");
    scanf("%d",&ll);
    printf("Enter upper limit\n");
    scanf("%d",&ul);
    for(int i=ll;i<=ul;i++){
        for(int k=2;k<i;k++){
        if(i%k==0){
            j++;
        }
    }if (j==0)
    {
        printf("%d",i);
    }else {printf("%d",i);}
    }

}
