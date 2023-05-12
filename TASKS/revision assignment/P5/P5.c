#include "..\.\myfunctions\myfunctions.h"

int main(){
	printf("THIS PROGRAM CALCULATE MAXIMUM ANDD MINIMUM BETWEEN 4 NUMBERS\n\n");
	while(1){
		int response, x, min = INT_MAX, max = INT_MIN;
		char*s;
		for(int i = 0; i < 4; i++){
			do{
				printf("Enter A Number: ");
				s = takestring_v2();
				x = string_to_int(s);
			}	
			while(x == -1 && printf("Invalid Number, Please Try Again!\n"));
			if(x > max) max = x;
			if(x < min) min = x;
		}
		printf("The Maximum Number = %d\n",max);
		printf("The Minimum Number = %d\n",min);
		
		printf("\nDo You Want To Exit Program?\nEnter 1 For Yes or 2 For No: ");
		scanf("%d",&response);
		if(response == 1)return 0;
	}
}	
