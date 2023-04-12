#include <stdio.h>

int main()
{
    int usage;
    float m1, m2, m3, mt;
    scanf("%d", &usage);
    getchar();
    //读入用电量；
    if (usage >= 300)
    {
        m3 = (usage - 300) * 1;
        m2 = 90;
        m1 = 160;
    }
    else
    {
        if (usage >= 200)
        {
            m3 = 0;
            m2 = (usage - 200) * 0.9;
            m1 = 160;
        }
        else
        {
            m3 = 0;
            m2 = 0;
            m1 = (usage)*0.8;
        }
    }
    mt = m1 + m2 + m3;
    //阶梯法计算money
    if (mt > 400)
    {
        mt = mt * 1.15;
    }
    else if (mt < 100)
    {
        mt = 100;
    }
    //判断是否超额,低于100元
    printf("%.2f", mt);
    return 0;
    //输出结果
}
