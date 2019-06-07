#include<stdio.h>
int main(void){
	int first_oper,second_oper;
	printf("This program computes moduli.\n");
	printf("Enter an integer to serve as the second operand: ");
	scanf("%d",&second_oper);
	printf("Now enter the first operand: ");
	scanf("%d",&first_oper);
	printf("%d %% %d is %d\n",first_oper,second_oper,first_oper%second_oper);
	while(first_oper>0){
		printf("Enter next number for first operand(<=0 to quit): ");
		scanf("%d",&first_oper);
		if(first_oper<=0){
			break;
		}
		printf("%d %% %d is %d\n",first_oper,second_oper,first_oper%second_oper);
	}
	printf("Done\n");
	return 0;
}
