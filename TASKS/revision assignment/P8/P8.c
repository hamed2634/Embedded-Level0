#include "..\.\myfunctions\myfunctions.h"

void getmaxmin(int n,int* arr,int* max,int* min){
	*min = INT_MAX;
	*max = INT_MIN;
	for(int i = 0;i < n;i++){
		if(arr[i] > *max) *max = arr[i];
		if(arr[i] < *min) *min = arr[i];
	}
}

int main(){
	printf("\nTHIS PROGRAM EVALUATE THE MAXIMUM AND MINIMUM ELEMENTS IN AN ARRAY USING POINTERS\n");
	while(1){
		int n, max, min, response;
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
		}
		
		getmaxmin(n, arr, &max, &min);
		printf("\nThe Maximum Element = %d",max);
		printf("\nThe Minimum Element = %d\n",min);
		
		printf("\nDo You Want To Exit Program?\nEnter 1 For Yes or 2 For No: ");
		scanf("%d",&response);
		if(response == 1)return 0;
	}
}	