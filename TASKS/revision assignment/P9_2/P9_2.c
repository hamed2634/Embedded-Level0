#include "..\.\myfunctions\myfunctions.h"
#define getbit(x,n) x>>n & 1  

int main(){
	printf("\nTHIS PROGRAM CHECKS A BIT OF NUMBER IF IT IS 0 OR 1\n");
	while(1){
		int response ,num, bit;
		char *s = NULL;
		do{
			printf("\nEnter Any Number: ");
			s = takestring_v2();
			num = string_to_int(s);
		}	
		while(num == -1 && printf("Invalid Number, Please Try Again!\n"));
		
		do{
			printf("\nEnter nth Bit To Check (0-31): ");
			s = takestring_v2();
			bit = string_to_int(s);
		}	
		while((num == -1 || bit > 31 || bit < 0) && printf("Invalid Bit Number, Please Try Again!\n"));
		
		printf("\nThe %d Bit in %d Is Set To %d\n",bit, num,getbit(num,bit));
		
		printf("\nDo You Want To Exit Program?\nEnter 1 For Yes or 2 For No: ");
		scanf("%d",&response);
		if(response == 1)return 0;		
	}
}	
	