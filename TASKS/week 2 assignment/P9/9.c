#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("Enter The Number: ");
    int num; scanf("%d",&num);
    int factorial = 1, q = num;
    while(q != 0){
        factorial *= q;
        q--;
    }
    printf("The Factorial Of %d Is %d.",num,factorial);
	
	//readline to prevent file from closing
	printf("\n\nEnter anything To Close\n");
    int tempvar; scanf("%d",&tempvar);	
    return 0;
}
