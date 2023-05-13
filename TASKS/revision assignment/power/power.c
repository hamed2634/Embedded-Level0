#include "..\.\myfunctions\myfunctions.h"


double factorial[100];

void set_factorial(){
    factorial[0] = 1;
    for(int i = 1; i < 100; i++){
        factorial[i] = factorial[i - 1] * i;
    }
}

double LN(double x) {

    if (x >= 2) {
        return LN(x/2.0) + (double)0.6931471806;
    }

    x = x-1;

    double total = 0.0;
    double xToTheIPower = x;

    for (int i = 1; i < 100; i++) {
        if (i&1) total += xToTheIPower / (i);
        else total -= xToTheIPower / (i);
        xToTheIPower *= x;
    }
    return total;
}

double e(double x){
    double sum = 0, xToTheIPower = 1;
    for (int i = 0; i < 38; i++){
        sum += xToTheIPower/factorial[i] ;
        xToTheIPower *= x;
    }
    return sum;
}

double power(double a,double b){
    return e(b * LN(a));
}

int main(){
	set_factorial();
	printf("THIS PROGRAM CALCULATE A POWER OF NUMBER\n\n");
	while(1){
		int response;
		double a,b;
		printf("\nEnter A Number: ");
		scanf("%lf",&a);
		printf("Enter A Power: ");
		scanf("%lf",&b);

		printf("\n%.2lf ^ %.2lf = %.2lf\n",a,b,power(a,b));
		printf("\nDo You Want To Exit Program?\nEnter 1 For Yes or 2 For No: ");
		scanf("%d",&response);
		if(response == 1)return 0;
	}
}	