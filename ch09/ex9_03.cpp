#include<stdio.h>
void chline(char ch,int i,int j);
int main(){
	chline('x',3,5);
	return 0;
}

void chline(char ch,int i,int j){
	for(int m=0;m<j;m++){
		for(int n=0;n<i;n++){
			printf("%c",ch);
		}
		printf("\n");
	}
}
