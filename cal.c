#include <stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{   int *opr,n;
    double a, b;
    opr=(char*)malloc(1*sizeof(char));
    do{
    printf("Enter an operator\n");
    scanf("%c",&opr);
    if()n=1;
    if(strcmp(opr,'-')==0)n=2;
    if(strcmp(opr,'*')==0)n=3;
    if(strcmp(opr,'/')==0)n=4;
    if(strcmp(opr,'e')==0)n=5;
    switch (n)
    {
    case 1:
        printf("Enter two operands: \n");
        scanf("%lf %lf", &a, &b);
        printf("%lf\n", a + b);
        break;
    case 2:
          printf("Enter two operands: \n");
          scanf("%lf %lf", &a, &b);
          printf("%lf\n", a - b);
        break;
    case 3:
         printf("Enter two operands: \n");
         scanf("%lf %lf", &a, &b);
         printf("%lf\n", a * b);
        break;
    case 4:
        printf("Enter two operands: \n");
        scanf("%lf %lf", &a, &b);
        printf("%lf\n", a / b);
        break;
    default:
        printf("Enter Valid Operator\n");
    }free(opr);
    }while(n!=5);
    return 0;
}