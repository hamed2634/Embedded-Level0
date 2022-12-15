#include <stdio.h>
#include <stdlib.h>
long long fib_dp[1000] = {0,1};
long long fib(int n){
    if(n == 0) return 0;
    if(fib_dp[n]) return fib_dp[n];
    else{
        fib_dp[n] = fib(n - 1) + fib(n - 2);
        return fib_dp[n];
    }
}
int main()
{

    printf("Enter The Number: ");
    int n; scanf("%d",&n);
    printf("The Fib of %d = %lld",n,fib(n));
    return 0;
}