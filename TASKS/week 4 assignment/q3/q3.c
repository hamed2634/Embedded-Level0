#include <stdio.h>
#include <stdlib.h>

//This program has complexity o(1) for printing each element.
int main()
{
    _Bool printed[100000];
    int arr[10000];
    //maximum array of size 100000 and elements smaller than 100000
    int n;
    printf("Enter The Size Of The array: ");
    scanf("%d",&n);
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
}
