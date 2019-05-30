#include<stdio.h>
#include<string.h>
int main(void){
	char name[40];//c”Ô—‘√ª”–String
	printf("Enter ur name:");
	scanf("%s",&name);
	printf("\"%s\"\n",name);
	printf("\"%20s\"\n",name);
	printf("\"%-20s\"\n",name);
	printf("\"%*s\"\n",strlen(name)+3,name);
	return 0;
} 
