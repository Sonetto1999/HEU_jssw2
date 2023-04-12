#include <stdio.h>

int main(){
	int num[10]={0};
	int i;
	for (i=0;i<10;i++){
		scanf("%d", &num[i]);
	}	//录入
	num[9] = 0;		//末项清零
	for (i=0;i<9;i++){
	num[9] += num[i];	//数组求和; 
	}
	for (i=0;i<9;i++){
		printf("%d,", num[i]);
	}	//输出前8项
	printf("%d", num[9]/9);	//末项输出平均数
	return 0;
} 
