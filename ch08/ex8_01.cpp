#include<stdio.h>
int main(void){
	int count=0;
	char ch;
	while((ch=getchar())!=EOF){
		count++;
	}
	printf("%d\n",count-1);//如果缓冲中还有其它内容，ctrl+z不表示输入结束，仅代表当前行输入结束，只在单独一个ctrl+z的时候才表示输入结束。
	return 0;
} 
