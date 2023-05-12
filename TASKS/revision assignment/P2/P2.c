#include "..\.\myfunctions\myfunctions.h"

int main(){
	printf("THIS PROGRAM Evaluate WEATHER A YEAR IS LEAP OR NOT\n\n");
	while(1){
		int n,response;
		char *s = NULL;
		do{
			printf("Enter A YEAR: ");
			s = takestring_v2();
			n = string_to_int(s);
		}	
		while(n == -1 && printf("Invalid YEAR, Please Try Again!\n"));
		if(n % 4 == 0 && n % 100 || n % 400 == 0) printf("\n%d Is A Leap Year!\n", n);
		else printf("\n%d Is NOt A Leap Year!\n", n);
		printf("\nDo You Want To Exit Program?\nEnter 1 For Yes or 2 For No: ");
		scanf("%d",&response);
		if(response == 1)return 0;
	}
}	