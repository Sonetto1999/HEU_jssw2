#include <stdio.h>

int main()
{
    int m, n;
    scanf("%d,%d", &m, &n);
    if (m > 10000 || n > 10000 || m <= 0 || n <= 0)
    {
        printf("error");
    } //非法情况检测
    else
    {
        if (m >= n)
        {
            int temp;
            temp = n;
            n = m;
            m = temp;
        } //修复错误的区间端点

        //程序主体
        else
        {
            int i, j, k, l, a[9999] = {0};
            for (i = m; i >= m && i <= n; i++)
            {
                for (j = 1; j <= i / 2; j++)
                {
                    if (i % j == 0)
                    {
                        a[j - 1] = j;
                    }
                    else
                    {
                        a[j - 1] = 0;
                    } //分解因数
                }
                k = 0;
                for (l = 0; l < 9999; l++)
                {
                    k += a[l];
                } //计算因数和
                if (k == i)
                {
                    printf("%d,", i);
                } //判断是否和当前数字相等
            }     //遍历m~n之间的所有整数
        }
    }
}