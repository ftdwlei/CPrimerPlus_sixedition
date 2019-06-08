#include<stdio.h>
int main(void){
	char ch;
	ch=getchar();
	int count=0;
	while(ch!='#'){
		switch(ch){
			case '!':
			case '.':
				count++;
				break;
		}
		ch=getchar();
	}
	printf("%d\n",count);
	return 0;
} 
