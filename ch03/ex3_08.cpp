#include<stdio.h>
int main(void){
	printf("Enter cups number:");
	float cups,pint,ounce,tablespoon,teaspoon;
	scanf("%f",&cups);
	pint=cups/2;
	ounce=cups*8;
	tablespoon=ounce*2;
	teaspoon=tablespoon*3;
	printf("pint=%.2f cups=%.2f ounce=%.2f talespoon=%.2f teaspoon=%.2f\n",pint,cups,ounce,tablespoon,teaspoon);
	return 0;
}
