#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* takestring(){
    char* s = (char *)calloc(1,sizeof(char));
    int len = 1;
    *s = '\0';
    char t;
    t = getchar();
    int c = 1;
    while(t != '\n'){
        if(c == len)
        {
            s = (char *)realloc(s, (2 * len) * sizeof(char));
            len = 2 * len;
        }
        *(s + c - 1) = t;
        *(s + c) = '\0';
        c++;
        t = getchar();
    }
	fflush(stdin);
	if(len == 1)  return takestring();
	if(*s == ' ') {
		printf("Cannot Start With Spaces!\nEnter Again: ");
		return takestring();
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
	
	//readline to prevent file from closing
	printf("\n\nEnter anything To Close\n");
    int tempvar; scanf("%d",&tempvar);
}
