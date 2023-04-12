#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d", &a);
    if (a > 10)
    {
        printf("error");
    }
    else
    {
        if (a >= 3)
        {
            b = a * a * a * a + (a + 3) * (a + 3) * (a + 3) * (a + 3) + (a + 6) * (a + 6) * (a + 6) * (a + 6) + (a + 9) * (a + 9) * (a + 9) * (a + 9) + (a + 12) * (a + 12) * (a + 12) * (a + 12) + (a + 15) * (a + 15) * (a + 15) * (a + 15);
            printf("%d", b);
        }
        else
        {
            printf("error");
        }
    }
    return 0;
}
