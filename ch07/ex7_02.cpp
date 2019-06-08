#include<stdio.h>
int main(void){
	char ch;
	ch=getchar();
	int count=0;
	while(ch!='#'){
		count++;
		if(count%8==0){
			printf("%c-%d\n",ch,ch);
		}else{
			printf("%c-%d ",ch,ch);
		}
		ch=getchar();
	}
	return 0;
} 
