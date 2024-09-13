#include<stdio.h>
int main(){
	float amount,discount,final;
	printf("Enter the amount for Payment: \n");
	scanf("%f", &amount);
	
	if (amount < 1500){
		final = amount * 0.93;
		discount = amount - final;
	} else if (amount < 3001 && amount > 1499){
		final = amount * 0.88;
		discount = amount - final;
	} else if (amount < 5001 && amount > 2999){
		final = amount * 0.78;
		discount = amount - final;
	} else if (amount > 5000){
		final = amount * 0.70;
		discount = amount - final;
	}
	
	printf("the original amount %.2f, the amount saved due to the discount is %.2f, and the amount after applying the discount is %.2f",amount,discount,final);
		
	return 0;
}
