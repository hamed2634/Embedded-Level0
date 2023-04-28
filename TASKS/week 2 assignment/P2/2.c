#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter The Number: ");
    int x; scanf("%d",&x);
    if(x & 1)
        printf("Odd\n");
    else
        printf("Even\n");
	
	//readline to prevent file from closing
	printf("\n\nEnter anything To Close\n");
    int tempvar; scanf("%d",&tempvar);	
    return 0;
}
