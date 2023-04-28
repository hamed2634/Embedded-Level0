#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter The three Numbers: ");
    int a,b,c; scanf("%d%d%d",&a,&b,&c);
    int max = (a>b)? ((a>c)? a :c) : ((b>c)? b :c) ;
    printf("The Maximum Number = %d",max);
	
	//readline to prevent file from closing
	printf("\n\nEnter anything To Close\n");
    int tempvar; scanf("%d",&tempvar);	
    return 0;	
}