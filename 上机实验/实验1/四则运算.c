#include <stdio.h>
int main()
{
	int a, b; /*声明操作变量*/ 
	scanf("%d,%d", &a, &b); /*录入数字*/ 
	int o1 = a + b,
		o2 = a - b,
		o3 = a * b,		 
		o4 = a / b;  	/*进行运算并储存在新的变量中*/ 
	printf("a+b=%d\n\na-b=%d\n\na*b=%d\n\na/b=%d\n\n", o1, o2, o3, o4); /*输出结果*/ 
	return 0;  	/*返回 0*/ 
}
