#include<stdio.h>
int main(void){
	char ch1,ch2;
	int count=0;
	ch1=getchar();
	ch2=getchar();
	while(ch1!='#'&&ch2!='#'){
		if(ch1=='e'&&ch2=='i'){
			count++;
		}
		ch1=ch2;
		ch2=getchar();
	}
	printf("%d\n",count);
	return 0;
} 
