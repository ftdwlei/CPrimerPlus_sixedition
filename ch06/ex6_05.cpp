#include<stdio.h>
int main(void){
	char lets[27]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	printf("Enter a upper case letters:");
	char upper_letters;
	scanf("%c",&upper_letters);
	for(int i=0;i<int(upper_letters-'A')+1;i++){
		for(int j=0;j<int(upper_letters-'A')-i;j++){
			printf(" ");
		}
		
		for(int k=0;k<=i;k++){
			printf("%c",lets[k]);
		}
		
		for(int m=0;m<i;m++){
			printf("%c",lets[i-m]-1);
		}
		
		printf("\n");
	}
	return 0;
}
