#include <stdio.h>
#include <ctype.h> 
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
    printf("Enter a String: ");
    //taking string by dynamic allocation without knowing the size:
    char* s = takestring();

    //counting:
    int alphas = 0, digits = 0, special = 0;
    for(size_t i = 0; i < strlen(s); i++){
        if(isdigit(*(s + i))) digits++;
        else if(isalpha(*(s + i))) alphas++;
        else special++;
    }
    printf("\nThere Are: \n\n%d Alphabets\n%d Digits\n%d Special Characters\n\n", alphas, digits, special);
	
	//readline to prevent file from closing
	printf("\n\nEnter anything To Close\n");
    int tempvar; scanf("%d",&tempvar);
}
