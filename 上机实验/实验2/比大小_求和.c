#include <stdio.h>

int main()
{
    int a, b, c, d, e;
    scanf("%d,%d,%d,%d", &a, &b, &c, &d);
    //输入数字
    if (b >= a)
    {
        if (c >= d)
        {
            printf("%d", e = a + c);
        }
        else
        {
            printf("%d", e = a + d);
        }
    }
    else
    {
        if (c >= d)
        {
            printf("%d", e = b + c);
        }
        else
        {
            printf("%d", e = b + d);
        }
    }
    //判断 并输出结果
    return 0;
}
