#include<stdio.h>
void Temperatures(double hs_temp);
int main(void){
	printf("Enter a hs_temp: ");
	double hs_temp;
	while(scanf("%lf",&hs_temp)){
		Temperatures(hs_temp);
	}	
	return 0;
}
void Temperatures(double hs_temp){
	double ss_temp,ks_temp;
	const double HS_TO_SS=32.0; 
	const double SS_TO_KS=273.16;
	ss_temp=5.0/9.0*(hs_temp-HS_TO_SS);
	ks_temp=ss_temp+SS_TO_KS;
	printf("%6.2f %6.2f %6.2f\n",hs_temp,ss_temp,ks_temp);
}
