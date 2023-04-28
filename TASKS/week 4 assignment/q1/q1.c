#include <stdio.h>
#include <stdlib.h>

void print_array(int a[], int n)
{
    for(int i = 0; i < n; i++){
        printf("%d ",a[i]);
    }
}
int main()
{
    int n,choice;
    printf("Enter The Size Of The array: ");
    scanf("%d",&n);
	int arr[n];
    printf("----------------------------------------------\n");
    for(int i = 0; i < n; i++){
        printf("Enter The %d Element: ",i + 1);
        scanf("%d",&arr[i]);
    }
    printf("----------------------------------------------\n");
    printf("Enter 0 For Ascending And 1 For Descending: ");
    scanf("%d",&choice);

    // Bubble sort
    if(choice){
        for(int i = 0; i < n - 1; i++){
            for(int j = 0; j < n - i - 1; j++){
                if(arr[j] < arr[j + 1]){
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }
    else{
        for(int i = 0; i < n - 1; i++){
            for(int j = 0; j < n - i - 1; j++){
                if(arr[j] > arr[j + 1]){
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }
    printf("----------------------------------------------\n");
    printf("The Array After Sorting: \n");
    print_array(arr, n);
	
	//readline to prevent file from closing
	printf("\n\nEnter anything To Close\n");
    int tempvar; scanf("%d",&tempvar);
}
