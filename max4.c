#include <stdio.h>
#include<math.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d){
     int num[]={a,b,c,d};
     int max = num[0];
     for(int i =1;i<=3;i++){
         if(max < num[i]){
              max = num[i];
         }
     } return max;
}
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}