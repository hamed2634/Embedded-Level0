#include "..\.\myfunctions\myfunctions.h"

#define getbit(x,n) x>>n & 1  
int main(){
	printf("THIS PROGRAM COUNT THE ONES AND ZERO BITS IN A VALID NUMBER\n\n");
	while(1){
		int n,response;
		char *s = NULL;
		do{
			printf("Enter A Number: ");
			s = takestring_v2();
			n = string_to_int(s);
		}	
		while(n == -1 && printf("Invalid Number, Please Try Again!\n"));
		int zeros = 0, ones = 0;
		for(int i = 0; i < 32; i++)
			if(getbit(n,i)) ones++;
			else zeros++;
			
		printf("Total Zero Bit is: %d\n",zeros);	
		printf("Total One Bit is: %d\n",ones);	
		
		printf("\nDo You Want To Exit Program?\nEnter 1 For Yes or 2 For No: ");
		scanf("%d",&response);
		if(response == 1)return 0;
	}
}	
	