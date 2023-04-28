#include <stdio.h>
#include <stdlib.h>
int sum(int *p,int *q){
    return *p + *q;
}
int main()
{
    int a, b;
    printf("Enter Two Values: ");
    scanf("%d%d",&a,&b);
    printf("The Summation Of %d + %d = %d",a,b,sum(&a,&b));
	
	//readline to prevent file from closing
	printf("\n\nEnter anything To Close\n");
    int tempvar; scanf("%d",&tempvar);
}