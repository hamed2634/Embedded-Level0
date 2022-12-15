#include <stdio.h>
#include <stdlib.h>
int login(){
    int tries = 3;
    printf("Enter The login code: ");
    do{
        int login_code; scanf("%d",&login_code);
        if(login_code == 1234) return 1;
    }while(tries-- && printf("Invalid Code, You have %d Tries.\n",tries + 1));
    return 0;
}
int main()
{
    if(login()) printf("Welcome.\n");
    else printf("Can't Login.\n");
    return 0;
}
