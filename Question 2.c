#include<stdio.h>
int main(){
	float charge, price;
	
	printf("Enter the Unit Charges: \n");
	scanf("%f", &charge);
	
	if (charge < 31){
		price = charge * 0.6;
	}
	else if (charge < 111 && charge > 30){
		price = 30 * 0.6;
		price = price + ((charge - 30) * 0.85);
	}
	else if (charge < 211 && charge > 110){
		price = 30 * 0.6;
		price= price + (80 * 0.85);
		price = price + ((charge - 110) * 1.30);
	}
	else if (charge > 210){
		price = 30 * 0.6;
		price= price + (80 * 0.85);
		price = price + ((charge - 210) * 1.60);
	}
	price = price * 1.15;
	printf("Price of the bill is %.2f", price);
	
	
	return 0;
}
