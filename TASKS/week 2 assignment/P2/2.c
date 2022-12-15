#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter The Number: ");
    int x; scanf("%d",&x);
    if(x & 1)
        printf("Odd\n");
    else
        printf("Even\n");
    return 0;
}
