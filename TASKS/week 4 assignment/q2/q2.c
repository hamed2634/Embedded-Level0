#include <stdio.h>
#include <stdlib.h>
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
    int max = arr[0];
    for(int i = 1; i < n; i++)
        if(arr[i] > max)
            max = arr[i];
    printf("The Max Element = %d",max);
}