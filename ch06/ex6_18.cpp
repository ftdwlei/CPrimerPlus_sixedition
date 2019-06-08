#include<stdio.h>
#define DB_NUM 150
int main(void){
	int friends_num=5,count=1;
	while(friends_num<=DB_NUM){
		friends_num-=count;
		friends_num*=2;
		count++;
	}
	printf("%d\n",count-1);
	return 0;
}
