#include <stdio.h>
#include <string.h>
int Pos(char s1[], char s2[])
{
    if (strlen(s2) > strlen(s1))
    {
        return -1; //长度非法 -1
    }
    else
    {
        if (strstr(s1, s2))
        {
            int i, m = 0;
            for (i = 0; i < strlen(s1); i++)
            {
                if (s1[i] == s2[0])
                {
                    m = i + 1;
                    break;
                } //找到第一个相同字符的位置
            }
            return m; //输出位置
        }
        else
        {
            return -1;
        } //不相同 -1
    }
} // Pos()函数主体内容
int main()
{
    char s1[100] = "", s2[100] = "";
    gets(s1);
    gets(s2);
    printf("%d", Pos(s1, s2));
    return 0;
} //调用Pos()