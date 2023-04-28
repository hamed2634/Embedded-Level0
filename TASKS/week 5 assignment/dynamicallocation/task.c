#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* p = (int *)calloc(5,sizeof(int));
    for(int* i = p; i < p + 5; i++){
        printf("\nEnter %d value ",i - p + 1);
        scanf("%d",i);
    }
    printf("Reallocating To 9 ......................");
    p = (int *)realloc(p,9 * sizeof(int));
    for(int* i = p + 5; i < p + 9; i++){
        printf("\nEnter %d value ",i - p + 1);
        scanf("%d",i);
    }
    for(int* i = p; i < p + 9; i++)
    printf("%d ",*i);

	//readline to prevent file from closing
	printf("\n\nEnter anything To Close\n");
    int tempvar; scanf("%d",&tempvar);
}