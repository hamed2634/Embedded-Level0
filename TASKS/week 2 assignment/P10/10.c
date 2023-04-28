#include <stdio.h>
#include <stdlib.h>
int main()
{
    int ID = 1111, password = 1234 ;
    int x,y,n=3;
    do{
        printf("Enter Your ID: ");
        scanf("%d",&x);
        printf("Enter Your Password: ");
        scanf("%d",&y);
        if(x == ID && y == password){
            printf("Welcome");
            break;
        }
    }while(--n &&printf("You Are Not Registered.\n"));
    if(n == 0) printf("No More Tries");
	
	//readline to prevent file from closing
	printf("\n\nEnter anything To Close\n");
    int tempvar; scanf("%d",&tempvar);	
    return 0;
}
