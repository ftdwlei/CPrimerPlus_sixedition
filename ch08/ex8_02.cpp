#include<stdio.h>
int main(void){
	char ch;
	int count=0;
	while((ch=getchar())!=EOF){
		count++;
		putchar(ch);
		if(count%10==0){
			printf("-%d\n",ch);
		}else{
			printf("-%d ",ch);	
		}
	}
	return 0;
} 
