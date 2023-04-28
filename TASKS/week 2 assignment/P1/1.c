#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("enter your working hours: ");
    int x; scanf("%d",&x);
    float salary = (x<40) ? 0.9*x*50 : x*50;
    printf("your salary = %.2f\n",salary);
	
	//readline to prevent file from closing
	printf("\n\nEnter anything To Close\n");
    int tempvar; scanf("%d",&tempvar);	
    return 0;	
}

