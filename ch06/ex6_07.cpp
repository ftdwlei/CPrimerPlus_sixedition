#include<stdio.h>
#include<string.h>
int main(void){
	char ch[40];
	int count=0;
	char word;
	word=getchar();
	while(word!='\n'){
		ch[count]=word;
		if((word<='Z'&&word>='A')||(word<='z'&&word>='a')){
			count++;
			word=getchar();
		}
	}
	ch[count+1]='\0';
	int j=strlen(ch)-1;
	while(j>=0){
		printf("%c",ch[j]);
		j--;
	}
	
	printf("\n"); 
	return 0;
} 
