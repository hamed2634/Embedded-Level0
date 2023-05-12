#include "..\.\myfunctions\myfunctions.h"

int main(){
	printf("\nTHIS PROGRAM COUNT ODD AND EVEN NUMBERS IN AN ARRAY\n");
	while(1){
		int n, odds = 0, evens = 0, response;
		char *s = NULL;
		do{
			printf("\nEnter The Size Of The Array: ");
			s = takestring_v2();
			n = string_to_int(s);
		}	
		while(n == -1 && printf("Invalid Number, Please Try Again!\n"));
		int * arr = (int *)malloc(n * sizeof(int));
		
		for(int i = 0; i < n;i++){
			do{
				printf("Enter %d Number: ",i + 1);
				s = takestring_v2();
				arr[i] = string_to_int(s);
			}	
			while(arr[i] == -1 && printf("Invalid Number, Please Try Again!\n"));
			
			if(arr[i]&1)odds++;
			else evens++;
		}	
		
		printf("\nTotal Even Elements: %d\n",evens);
		printf("Total Odd Elements: %d\n",odds);
		
		printf("\nDo You Want To Exit Program?\nEnter 1 For Yes or 2 For No: ");
		scanf("%d",&response);
		if(response == 1)return 0;
	}
}	

		