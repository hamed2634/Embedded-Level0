#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("Enter The Height: ");
	int height; scanf("%d",&height);
	for(int i = 0; i < height; i++){
		for(int j = 0;j<height - 1 - i; j++){
			printf(" ");
		}
		for(int k = 0;k< 2*i + 1;k++){
			printf("*");
		}
		printf("\n");
	}
	//readline to prevent file from closing
	printf("\n\nEnter anything To Close\n");
    int tempvar; scanf("%d",&tempvar);	
    return 0;	
}