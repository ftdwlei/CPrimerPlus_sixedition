#include<stdio.h>
int main(void){
	char ch;
	ch=getchar();
	int spacecount=0,entercount=0,othercount=0;
	while(ch!='#'){
		if(ch==' '){
			spacecount++;
		}else if(ch=='\n'){
			entercount++;
		}else{
			othercount++;
		}
		ch=getchar();
	}
	printf("%d %d %d\n",spacecount,entercount,othercount);
	return 0;
} 
