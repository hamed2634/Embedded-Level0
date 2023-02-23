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
    printf("Input character to search: ");
    char c;
    scanf("%c",&c);

    //searching:
    int idx = -1;
    for(size_t i = 0; i < strlen(s); i++){
        if(*(s + i) == c){
            idx = i;
            break;
        }
    }
    if(idx == -1) printf("\nCouldn't find \'%c\' in %s", c, s);
    else printf("\n\'%c\' Was found first at index %d", c, idx);
}
