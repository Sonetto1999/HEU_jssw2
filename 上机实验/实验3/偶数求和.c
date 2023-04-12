#include<stdio.h>

int main(){
	int a[9]={0};	//这里设置9个元素的数组，最后一位存放求和结果；
	int i; 
	for(i=0;i<8;i++){
		scanf("%d",&a[i]);	
	}	//输入数字到数组；
	for(i=0;i<8;i++){
		if(a[i]%2==0){
			a[9] += a[i];
		}
	}	//遍历前8项，是偶数就加到第9项；
	printf("%d", a[9]);	
	return 0;
}
