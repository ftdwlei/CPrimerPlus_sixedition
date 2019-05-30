#include<stdio.h>
int main(void){
	printf("Enter ur height(inch):");
	float inch;
	scanf("%f",&inch);
	printf("ur height(cm) is %.2f\n",inch*2.54);
	return 0;
}
