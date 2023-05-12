#include "..\.\myfunctions\myfunctions.h"

int main(){
	printf("THIS IS A CALCULATOR PROGRAM\n\n");
	while(1){
		char operator;
		int response;
		double x1,x2;
		do{
			printf("Enter An Operator (+, -, *,/): "); fflush(stdin);
			scanf("%c",&operator); 
		}	
		while(operator != '+' && operator != '-' && operator != '*' && operator != '/' && printf("Invalid Operator, Please Try Again!\n"));
		
		printf("Enter Two Operands: ");
		scanf("%lf%lf",&x1,&x2);
		switch(operator){
			case '+':
				printf("%lf + %lf = %lf\n",x1,x2,x1+x2);
				break;
			case '-':
				printf("%lf - %lf = %lf\n",x1,x2,x1-x2);
				break;			
			case '*':
				printf("%lf * %lf = %lf\n",x1,x2,x1*x2);
				break;
			case '/':
				printf("%lf / %lf = %lf\n",x1,x2,x1/x2);
				break;
		}
		
		printf("\nDo You Want To Exit Program?\nEnter 1 For Yes or 2 For No: ");
		scanf("%d",&response); 
		if(response == 1)return 0;
	}
}	