#include<stdio.h>
int main(void){
	char ch;
	double base,salary,taxes;
	while(true){
		printf("*****************************************************************\n");
		printf("输入婚姻财产状况:\n");
		printf("1) 单身                          2) 户主\n");
		printf("3) 已婚，共有                    4) 已婚，离异\n");
		printf("*****************************************************************\n");
		
		ch=getchar();
		if(ch=='1'){
			base=17850;
		}else if(ch=='2'){
			base=23900;
		}else if(ch=='3'){
			base=29750;
		}else if(ch=='4'){
			base=14875;
		}else{
			continue;
		}
		
		printf("Enter your salary: ");
		scanf("%lf",&salary);
		
		taxes=base*0.15+(salary-base)*0.28;
		
		printf("%lf\n",taxes);
	}
	return 0; 
}
