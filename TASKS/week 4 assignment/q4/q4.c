#include <stdio.h>
#include <stdlib.h>

void print_repeated(int a[], int n){
    int finds[100000] = {0};
    for(int i = 0; i < n; i++){
        if(finds[a[i]] == 1)
            printf("%d ",a[i]);
        finds[a[i]]++;
    }
}

int main()
{
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
    print_repeated(arr, n);
}
