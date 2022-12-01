#include<stdio.h>
#include<math.h>
void hanoi(int n,char source,char helper, char destination){
    int i;
    if (n==0){return;}
    hanoi(n-1,source,destination,helper);
    printf("move 1 disk from %c to %c\n",source,destination);
    hanoi(n-1,helper,source,destination);
}
int main(){
    int n;
    printf("Enter no.of disks\n");
    scanf("%d",&n);
    char source ='A';
    char helper ='B';
    char destination ='C';
    int moves = pow(2,n)-1;
    hanoi(n,source,helper,destination);
    printf("No.of moves = %d",moves);
    return 0;
}