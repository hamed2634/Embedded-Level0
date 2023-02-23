#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
char* takestring(){
    char* s = (char *)calloc(1,sizeof(char));
    int len = 0;
    char t;
    while(scanf("%c",&t) && t != '\n'){
        s = (char *)realloc(s,len + 1);
        *(s+len) = t;
        *(s+len+1) = '\0';
        len++;
    }
    return s;
}
int main()
{
    printf("Input String: ");
    //taking string by dynamic allocation without knowing the size:
    char* s = takestring();

    printf("Reversed String: ");
    //printing in reversed way:
    for(int i = strlen(s) - 1; i >= 0; i--){
        printf("%c", *(s + i));
    }
}
