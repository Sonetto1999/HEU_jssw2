#include <stdio.h>

int a[5], b[5], merge[10];
int temp, i, n;//冒泡排序的必要缓存和循环控制变量 

int main(){
	for(i = 0;i<5;i++){
		scanf("%d", &a[i]);
		getchar();
	} 
	for(i = 0;i<5;i++){
		scanf("%d", &b[i]);
		getchar();
	} 	//输入两个数组
	
	//合并 
	for(i = 0;i<5;i++){
		merge[i] = a[i];
	} 
	for(i = 5;i<10;i++){
		merge[i] = b[i-5];	
	} 	
	//输出1
	for(i=0;i<9;i++){
		printf("%d,", merge[i]); 
	} 	
	printf("%d\n", merge[9]);
	
	//冒泡排序
	for(i=0;i<9;i++){
		for(n=0;n<9-i;n++){
			if(merge[n]>merge[n+1]){
				temp = merge[n];
				merge[n] = merge[n+1];
				merge[n+1] = temp;
			}
		}
	}	
	//输出2
	for(i=0;i<9;i++){
		printf("%d,", merge[i]); 
	} 
	printf("%d", merge[9]);
	return 0;
} 
