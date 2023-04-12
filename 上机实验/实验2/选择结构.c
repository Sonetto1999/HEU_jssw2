#include <stdio.h>
#include <math.h>
int main()
{
	float a;
	int b;
	int c;
	int d;
	//定义变量
	scanf("%f", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	scanf("%d", &d);
	//存储输入的数字 和 选择分支
	switch (b)
	{
	case 1:
		printf("%4.2f\n\n", -a);
		break;
	case 2:
		printf("%4.2f\n\n", sqrt(a));
		break;
	case 3:
		printf("%4.2f\n\n", a * a);
		break;
	};
	switch (c)
	{
	case 1:
		printf("%4.2f\n\n", -a);
		break;
	case 2:
		printf("%4.2f\n\n", sqrt(a));
		break;
	case 3:
		printf("%4.2f\n\n", a * a);
		break;
	};
	switch (d)
	{
	case 1:
		printf("%4.2f\n\n", -a);
		break;
	case 2:
		printf("%4.2f\n\n", sqrt(a));
		break;
	case 3:
		printf("%4.2f\n\n", a * a);
		break;
	};
	//三次判断
	return 0;
}
