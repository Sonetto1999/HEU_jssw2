#include <stdio.h>
float Px(int n, int x){
	float pnx = 0.0;
	if (n < 0){
		pnx = 0.0;
	}
	else if (n == 0){
		pnx = 1.00;
	}
	else if (n == 1){	
		pnx = x;
	}
	else if (n > 1){
		pnx = ((2 * n - 1) * x - Px(n-1,x) - (n - 1) * Px(n-2,x)) / n;
	}
	return pnx;
}
int main(){	
	int n, x;
	scanf("%d,%d", &n, &x);
	if (n<0){
		printf("error");
	}
	else{
		printf("%.2f", Px(n,x));
	}
	return 0;
}
