#include<stdio.h>
int main(void){
	char ch;
	ch=getchar();
	int evencount=0,oddcount=0,even_sum=0,odd_sum=0;
	printf("%d\n",'1'-'0');
	while(ch!='0'){
		switch(ch){
			case '1':
			case '3':
			case '5':
			case '7':
			case '9':
				oddcount++;
				odd_sum+=int(ch-'0');
				break;
			case '2':
			case '4':
			case '6':
			case '8':
				evencount++;
				even_sum+=int(ch-'0');
				break;
		}
		ch=getchar();
	}
	printf("%d %lf %d %lf\n",evencount,even_sum*1.0/evencount,oddcount,odd_sum*1.0/oddcount);
	return 0;
} 
