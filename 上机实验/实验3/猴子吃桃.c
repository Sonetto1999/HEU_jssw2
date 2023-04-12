#include <stdio.h>
int main()
{
	int m, n;
	m = 1;
	for (n = 1; n < 10; n++)
	{
		m = (m + 1) * 2;
	} //迭代9次，计算出总桃子数；
	printf("%d", m);
	return 0;
}
