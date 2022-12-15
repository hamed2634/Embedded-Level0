#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 10,sum = 0;
    while(n--){
        printf("Enter %d Number: ",10-n);
        int a; scanf("%d",&a);
        sum += a;
    }
    printf("The Sum = %d\nThe Avarage = %.1f",sum,sum/10.0);
    return 0;
}


