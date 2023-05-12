#include "..\.\myfunctions\myfunctions.h"

int is_binary(char *s){
	for(int i = 0; i < strlen(s); i++)
		if(s[i] != '0' && s[i] != '1') return 0;
	return 1;
}	

int main(){
	printf("\nTHIS PROGRAM CONVERTS BINARY NUMBER TO A DECIMAL NUMBER\n");
	while(1){
		int response;
		char *s = NULL;
		do{
			printf("\nEnter A Binary NUMBER: ");
			s = takestring_v2();
		}	
		while(!is_binary(s) && printf("Invalid Number, Please Try Again!\n"));
		
		int num = 0, power = 1, temp = 0;
		for(int i = strlen(s) - 1; i >= 0; i--){
			if(s[i] == '1') temp += power;
			power *= 2;
			if(temp < num) break;
			num = temp;
		}
			
		if(temp < num) printf("\nOVERFLOWED!!\n");
		else printf("\n%s In Binary = %d In Decimal\n",s,num);
		
		printf("\nDo You Want To Exit Program?\nEnter 1 For Yes or 2 For No: ");
		scanf("%d",&response);
		if(response == 1)return 0;		
	}
}	
		
