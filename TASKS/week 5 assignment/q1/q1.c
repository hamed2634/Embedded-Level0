#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 10;
    printf("Value Before Edit: %d\n",x);
    int *p = &x;
    *p = 20;
    printf("Value After Edit: %d\n",x);
}