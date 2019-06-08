#include<stdio.h>
void is_letter(void);
int letter_locate(char ch);
int main(void){
	is_letter();
	return 0;
}

void is_letter(void){
	char ch;
	int index;
	while((ch=getchar())!=EOF){
		if((ch<='z'&&ch>='a')||(ch<='Z'&&ch>='A')){
			index=letter_locate(ch);
			printf("%c %d\n",ch,index);
		}
	}
}

int letter_locate(char ch){
	if(ch<='z'&&ch>='a'){
		return ch-'a'+1;
	}else if(ch<='Z'&&ch>='A'){
		return ch-'A'+1;
	}
	return -1;
}
