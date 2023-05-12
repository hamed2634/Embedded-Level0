#include "..\.\myfunctions\myfunctions.h"
int main(){
	printf("THIS PROGRAM TAKES A NUMBER AND CALCULATE ITS SUM OF DIGITS\n\n");
	while(1){
		int n, sum = 0,response;
		char *s = NULL;
		do{
			printf("Enter A Number: ");
			s = takestring_v2();
			n = string_to_int(s);
		}	
		while(n == -1 && printf("Invalid Number, Please Try Again!\n"));
		
		while(n){
			sum += n % 10;
			n /= 10;
		}
		printf("The Sum Of Digits = %d\n", sum);
		
		printf("\nDo You Want To Exit Program?\nEnter 1 For Yes or 2 For No: ");
		scanf("%d",&response);
		if(response == 1)return 0;
	}
}	