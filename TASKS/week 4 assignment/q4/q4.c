#include <stdio.h>
#include <stdlib.h>

void print_repeated(int a[], int n){
    _Bool repeated[100000];
    for(int i = 0; i < n; i++){
        if(repeated[a[i]])
            printf("%d ",a[i]);
        else
            repeated[a[i]] = 1;
    }
}

int main()
{
    int n, arr[10000];
    //maximum array of size 100000.
    printf("Enter The Size Of The array: ");
    scanf("%d",&n);
    printf("----------------------------------------------\n");
    for(int i = 0; i < n; i++){
        printf("Enter The %d Element: ",i + 1);
        scanf("%d",&arr[i]);
    }
    printf("----------------------------------------------\n");
    print_repeated(arr, n);
}
