#include <stdio.h>
#include <stdlib.h>
int getmax(int a,int b){
    int max = (a>b)? a : b;
    return max;
}

int main()
{
    printf("Enter The Two Numbers\n");
    int a,b; scanf("%d%d",&a,&b);
    printf("The Max Number = %d",getmax(a,b));
	
	//readline to prevent file from closing
	printf("\n\nEnter anything To Close\n");
    int tempvar; scanf("%d",&tempvar);
}

