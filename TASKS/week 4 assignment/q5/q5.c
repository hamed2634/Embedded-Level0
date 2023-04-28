#include <stdio.h>
#include <stdlib.h>

void print_array(int a[])
{
    for(int i = 0; i < 5; i++){
        printf("%d ",a[i]);
    }
}

int main()
{
    int n, arr[5][5], sum_row[5] = {0}, sum_col[5]= {0};
    for(int i = 0; i < 5; i++){
        printf("\nEnter row %d: ",i + 1);
        for(int j = 0; j < 5; j++){
            scanf("%d",&arr[i][j]);
            sum_row[i] += arr[i][j];
            sum_col[j] += arr[i][j];
        }
    }
    printf("\n----------------------------------------------\n");
    printf("Row Totals: ");
    print_array(sum_row);
    printf("\n\nColumns Totals: ");
    print_array(sum_col);
    printf("\n");
	
	//readline to prevent file from closing
	printf("\n\nEnter anything To Close\n");
    int tempvar; scanf("%d",&tempvar);
}
