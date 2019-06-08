#include<stdio.h>
int main(void){
	char ch;
	ch=getchar();
	int count=0;
	while(ch!='#'){
		if(ch=='!'||ch=='.'){
			count++;
		}
		ch=getchar();
	}
	printf("%d\n",count);
	return 0;
} 
