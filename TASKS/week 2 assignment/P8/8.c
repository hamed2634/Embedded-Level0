#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter The Number: ");
    int num; scanf("%d",&num);
    for(int i = 1; i<=12; i++){
        printf("%d x %d = %d\n",num,i,num*i);
    }
    return 0;
}
