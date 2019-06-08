#include<stdio.h>
#include<ctype.h>
int main(){
	char ch;
	int letterscount=0,wordcount=0,flag=0;
	while((ch=getchar())!=EOF){
		if(islower(ch)||isupper(ch)){
			letterscount++;
			flag=1;
		}
		if(isspace(ch)&&flag==1){
			wordcount++;
			flag=0;
		}
	}
	printf("wordcount:%d letterscount:%d avg_letters_of_word:%f\n",wordcount,letterscount,letterscount*1.0/wordcount);
	return 0;
}
