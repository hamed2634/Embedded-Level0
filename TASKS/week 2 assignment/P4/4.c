#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter your Grade: ");
    int grade; scanf("%d",&grade);
    if(grade >= 85) printf("Your rating is \"Excellent\".");
    else if(grade >= 75) printf("Your rating is \"Very Good\".");
    else if(grade >= 65) printf("Your rating is \"Good\".");
    else if(grade >= 50) printf("Your rating is \"Pass\".");
    else if(grade >= 30) printf("Your rating is \"Weak\".");
    else printf("Your rating is \"Very Weak\".");
}
