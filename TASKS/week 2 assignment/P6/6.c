#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x;
    printf("Enter The Result Of 3 x 4: ");
    do{
    scanf("%d",&x);
    }while(x != 12 && printf("Try Again : "));
    printf("Thanks");
    return 0;
}
