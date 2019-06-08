#include<stdio.h>
char get_first(void);
int main(void){
	printf("%c\n",get_first());
	return 0;
}

char get_first(void){
	char ch;
	while((ch=getchar())!='\n'){
		if(ch==' '){
			continue;
		}else{
			return ch;
		}
	}
}
