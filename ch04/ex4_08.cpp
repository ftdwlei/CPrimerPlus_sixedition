#include<stdio.h>
#define gallon_to_gas 3.785
#define mile_to_kilometre 1.609
int main(void){
	float mile,gallon;
	printf("Enter mile:");
	scanf("%f",&mile);
	printf("Enter gallon:");
	scanf("%f",&gallon);
	printf("%.1f",(gallon*gallon_to_gas)/(mile*mile_to_kilometre*100));
	return 0;
}
