#include<stdio.h>
int main(void){
	char lets[27]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int count=0;
	for(int i=0;i<6;i++){
		for(int j=0;j<=i;j++){
			printf("%c",lets[count]);
			count++;
		}
		printf("\n");
	}
	return 0;
}
