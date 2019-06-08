#include<stdio.h>
#include<string.h>
int main(void){
	char arr[255];
	char ch;
	int count=0;
	ch=getchar();
	while(ch!='\n'){
		arr[count]=ch;
		arr[count+1]='\0';
		count++;
		ch=getchar();
	}
	
	for(int i=strlen(arr)-1;i>=0;i--){
		printf("%c",arr[i]);
	}
	printf("\n");
	return 0;
}
