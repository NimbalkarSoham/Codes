#include <stdio.h>
int main()
{
    char n;
    double a, b;
    int c;
    do{
    printf("Enter an operator\n");
    scanf("%d", &c);

    switch (c)
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
    }
    }while(c!=5);
    return 0;
}