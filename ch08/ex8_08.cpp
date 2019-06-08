#include<stdio.h>
#define ADD +
#define SUBTRACT -
#define MULTIPY *
#define DIVIDE /
int main(void){
	double num1,num2;
	char ch;
		
	do{	
		printf("Enter the operation of your choice:\n");
		printf("a) add                  s) subtract\n");
		printf("m) multipy              d) divide\n");
		printf("q) quit\n");
		
		while((ch=getchar())!='q'){
			while((getchar())!='\n'){
				continue;
			}
			if(ch=='a'||ch=='s'||ch=='m'||ch=='d'){
				printf("Enter first number:");
				scanf("%d",&num1);
				
				printf("Enter second number:");
				scanf("%d",&num2);
				
				while(num2==0&&ch=='d'){
					printf("Enter a number other than 0:");
					scanf("%d",&num2);
				}	
			}		

			
		
			
			if(ch=='a'){
				printf("%d + %d = %d\n",num1,num2,num1+num2);
				break;
			}else if(ch=='s'){
				printf("%d - %d = %d\n",num1,num2,num1-num2);
				break;
			}else if(ch=='m'){
				printf("%d * %d = %d\n",num1,num2,num1*num2);
				break;
			}else if(ch=='d'){
				printf("%d / %d = %d\n",num1,num2,num1/num2);
				break;
			}
		}
		printf("Bye.\n");
		break;

			
	}while(1);

	
	
	return 0;
} 

