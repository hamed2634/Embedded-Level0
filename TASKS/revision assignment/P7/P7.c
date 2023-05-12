#include "..\.\myfunctions\myfunctions.h"

int main(){
	printf("\nTHIS PROGRAM COPY STRING WITHOUT USING STRCPY\n");
	while(1){
		int response;
		printf("Enter A String: ");
		char *s1 = takestring_v2();
		char *s2 = malloc((strlen(s1) + 1) * sizeof(char));
		for(int i = 0; i < strlen(s1) + 1;i++){
			*(s2 + i) = *(s1 + i) ;
		}
		printf("\nThe Copy Of The String: %s\n",s2);
		
		printf("\nDo You Want To Exit Program?\nEnter 1 For Yes or 2 For No: ");
		scanf("%d",&response);
		if(response == 1)return 0;
	}	
}	