#include <stdio.h>
#include <stdlib.h>
int scalar(int *p,int *q, int n){
    int sum = 0;
    for(int* limit = p + n ; p < limit ; p++,q++){
        sum += (*p) * (*q);
    }
    return sum;
}
int main()
{
    int n;
    printf("Enter The Size Of The Array: ");
    scanf("%d",&n);
    int a[n], b[n];
    printf("\nEnter The First Array:- \n\n");
    for(int i = 0; i < n; i++){
        printf("Enter The %d Element: ",i + 1);
        scanf("%d",&a[i]);
    }
    printf("\nEnter The Second Array:- \n\n");
    for(int i = 0; i < n; i++){
        printf("Enter The %d Element: ",i + 1);
        scanf("%d",&b[i]);
    }
    printf("\nThe Scalar Multiplication = %d",scalar(a,b,n));
	
	//readline to prevent file from closing
	printf("\n\nEnter anything To Close\n");
    int tempvar; scanf("%d",&tempvar);	
}