#include <stdio.h>
#include <stdlib.h>

//This program has complexity o(1) for printing each element.
int main()
{
    _Bool printed[100000];
    //Elements  Must Be Smaller Than 100000
    int n;
    printf("Enter The Size Of The array: ");
    scanf("%d",&n);
    int arr[n];
    printf("----------------------------------------------\n");
    for(int i = 0; i < n; i++){
        printf("Enter The %d Element: ",i + 1);
        scanf("%d",&arr[i]);
    }
    printf("----------------------------------------------\n");
    for(int i = 0; i < n; i++){
        if(!printed[arr[i]]){
            printf("%d ",arr[i]);
            printed[arr[i]] = 1;
        }
    }
	
	//readline to prevent file from closing
	printf("\n\nEnter anything To Close\n");
    int tempvar; scanf("%d",&tempvar);
}
