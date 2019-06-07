#include<stdio.h>
#define CM_TO_INCHES 2.54
#define FEET_TO_INCHES 12
int main(void){
	float cm,feet,inches;
	printf("Enter a height in centimmeters: ");
	scanf("%f",&cm);
	while(cm>0){
		feet=int(cm/CM_TO_INCHES/FEET_TO_INCHES);
		inches=cm/CM_TO_INCHES-feet*FEET_TO_INCHES;
		printf("%.1f cm = %.0f feet, %.1f inches\n",cm,feet,inches);
		printf("Enter a height in centimmeters(<=0 to quit): ");
		scanf("%f",&cm);
	}
	printf("bye\n");
	return 0;
} 
