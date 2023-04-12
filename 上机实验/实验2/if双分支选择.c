#include <stdio.h>
#include <math.h>

int main()
{
    int a;
    scanf("%d", &a);
    if (a % 2 == 0 || a < 0)
    {
        printf("%d", a * a);
    }
    else
    {
        printf("%d", a / 2);
    }
    return 0;
}
