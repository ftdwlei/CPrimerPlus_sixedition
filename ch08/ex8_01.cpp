#include<stdio.h>
int main(void){
	int count=0;
	char ch;
	while((ch=getchar())!=EOF){
		count++;
	}
	printf("%d\n",count-1);//��������л����������ݣ�ctrl+z����ʾ���������������ǰ�����������ֻ�ڵ���һ��ctrl+z��ʱ��ű�ʾ���������
	return 0;
} 
