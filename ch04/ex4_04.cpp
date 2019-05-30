#include<stdio.h>
int main(void){
	float tall;
	char name[40];
	printf("Enter ur tall:");
	scanf("%f",&tall);
	printf("Enter ur name:");
	scanf("%s",&name);
	printf("%s, you are %.3f feet tall\n",name,tall);
	return 0;
} 
