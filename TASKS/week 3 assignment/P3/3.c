#include <stdio.h>
#include <stdlib.h>
int digits(int n){
    int c = 1;
    while(n /= 10){
        c++;
    }
    return c;
}
int main()
{
    printf("Enter The Number: ");
    int n; scanf("%d",&n);
    printf("The Digits Of The Number = %d",digits(n));
    return 0;
}
