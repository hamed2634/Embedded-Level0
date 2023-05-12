#include "..\.\myfunctions\myfunctions.h"

int main(){
	printf("THIS PROGRAM CALCULATE A POWER OF NUMBER\n\n");
	while(1){
		int n, power, sum = 1, temp = 1,response;
		char *s = NULL;
		do{
			printf("Enter A Number: ");
			s = takestring_v2();
			n = string_to_int(s);
		}	
		while(n == -1 && printf("Invalid Number, Please Try Again!\n"));
		
		do{
			printf("Enter A Power: ");
			s = takestring_v2();
			power = string_to_int(s);
		}	
		while(power == -1 && printf("Invalid Number, Please Try Again!\n"));		
		
		for(int i = 0;i < power; i++){
			temp *= n;
			if(temp < sum)break;
			sum = temp;
		}
		if(temp < sum) printf("OVERFLOWED!!\n");
		else printf("%d ^ %d = %d\n", n, power, sum);
		
		printf("\nDo You Want To Exit Program?\nEnter 1 For Yes or 2 For No: ");
		scanf("%d",&response);
		if(response == 1)return 0;
	}
}	