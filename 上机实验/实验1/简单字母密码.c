#include <stdio.h>

int main()
{
    int c1 = 67,
        c2 = 104,
        c3 = 105,
        c4 = 110,
        c5 = 97; //根据	ASCII码表 声明各字母对应的整型变量
    c1 = c1 + 4;
    c2 = c2 + 4;
    c3 = c3 + 4;
    c4 = c4 + 4;
    c5 = c5 + 4;                              //变换操作
    printf("%c%c%c%c%c", c1, c2, c3, c4, c5); //以字母格式输出
    return 0;                                 //返回 0
}
