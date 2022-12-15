#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter Your ID: ");
    int x; scanf("%d",&x);
    switch(x)
    {
        case 1234: printf("Harry\n");
        break;
        case 5678: printf("Ron\n");
        break;
        case 1145: printf("Hermoine");
        break;
        default: printf("Wrong ID");
        break;
    }
}
