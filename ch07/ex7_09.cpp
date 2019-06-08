#include<stdio.h>
int main(void){
	printf("Enter a number:");
	int num;
	scanf("%d",&num);
	
	for(int i=2;i<num;i++){
		int flag=1;
		for(int j=2;j<i;j++){
			if(i%j==0){
				flag=0;
				break;
			}
		}
		if(flag==1){
			printf("%d\n",i);
		}
	}
	return 0;
}
