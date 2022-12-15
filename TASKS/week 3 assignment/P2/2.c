#include <stdio.h>
#include <stdlib.h>
int a,b;
void swap(){
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    printf("Enter The Two Numbers\n");
    scanf("%d%d",&a,&b);
    swap();
    printf("The Numbers after swaping: %d, %d",a, b);
}


