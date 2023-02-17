#include <stdio.h>
#include <stdlib.h>
void print_array(int a[], int n)
{
    for(int i = 0; i < n; i++){
        printf("%d ",a[i]);
    }
}
void bubble_sort(int *p, int n){
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(*(p + j) > *(p + j + 1)){
                int temp = *(p + j);
                *(p + j) = *(p + j + 1);
                *(p + j + 1) = temp;
            }
        }
    }
}
int main()
{
    int n;
    printf("Enter The Size Of The Array: ");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter The Array:- \n\n");
    for(int i = 0; i < n; i++){
        printf("Enter The %d Element: ",i + 1);
        scanf("%d",&a[i]);
    }
    bubble_sort(a,n);
    printf("\nThe Array After Sorting: \n");
    print_array(a, n);
}