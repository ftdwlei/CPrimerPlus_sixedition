#include<stdio.h>
int binary_search(int lower,int upper,int key);
int main(void){
	printf("find number:%d",binary_search(2,17,8));
	return 0;
}

int binary_search(int lower,int upper,int key){
	printf("guess number:%d\n",(lower+upper)/2);
	if(lower<upper){
		if(key>(lower+upper)/2){
			return binary_search((lower+upper)/2,upper,key);
		}else if(key<(lower+upper)/2){
			return binary_search(lower,(lower+upper)/2,key);
		}else{
			return (lower+upper)/2;
		}
	}else if(lower==key){
		return lower;
	}else{
		return -1;
	}
}
