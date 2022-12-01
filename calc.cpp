#include<stdio.h>
#include<math.h>
int main(){
    int a,b;
    char r;
    do{
    printf("enter two operands\n");
     scanf("%d\n%d",&a,&b);
     printf("enter operator\n");
     scanf("%c\n",r);
     switch(r){
         case '1':printf("%d",a+b);
         break;
         case '2':printf("%d",a-b);
         break;
         case '3':printf("%d",a/b);
         break;
         case '4':printf("%d",a*b);
         break;
         default : printf("enter valid operator\n");
         break;
     }
    }while(r!='e');
    return 0;
}
