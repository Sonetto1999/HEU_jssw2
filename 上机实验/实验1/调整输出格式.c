#include <stdio.h>

int main()
{
    int i = 6,
        j = 12;
    float x = 3.28;                            //声明变量
    j = j + 87;                                //格式转换
    printf("i=%d\n\nj=%c\n\nx=%.2f", i, j, x); //输出结果
    return 0;                                  //返回 0
}