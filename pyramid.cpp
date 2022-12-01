#include<stdio.h>
int main()
{
	int r,h,d,sp;//r for row, h for height, d for digit, sp for space
	printf("Enter height:\n");
	scanf("%d",&h);
        /* Code to print upper half of butterfly */
	for(r=1;r<=h-1;r++)
	{
		for(d=1;d<=r;d++)
			printf("*");
		for(sp=1;sp<=2*(h-r);sp++)
			printf(" ");
		putchar('\b');
		for(d=r;d>=1;d--)
			printf("*");
		putchar('\n');
		
	}
        /* Code to print lower half of butterfly. */
	for(r=h;r>=1;r--)
	{
		for(d=1;d<=r;d++)
			printf("*");
		for(sp=1;sp<=2*(h-r);sp++)
			printf(" ");
		putchar('\b');
    for(d=r;d>=1;d--)
			printf("*");
		putchar('\n');
		
	}
	return 0;
}