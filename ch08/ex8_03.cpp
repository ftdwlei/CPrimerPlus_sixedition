#include<stdio.h>
#include<ctype.h>
int main(){
	char ch;
	int lowercount=0,uppercount=0;
	while((ch=getchar())!=EOF){
		if(islower(ch)){
			lowercount++;
		}else if(isupper(ch)){
			uppercount++;	
		}else{
			continue;
		}
	}
	printf("lowerletters:%d upperletters:%d\n",lowercount,uppercount);
	return 0;
}
