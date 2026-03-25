// week05-3b.cpp SOIT106_ADVANCE_012
#include <stdio.h>
int main()
{
    int a[11], N = 10;
    for (int i = 0; i < 11; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] == 0)
        {
            N = i;
            break;
        }
    }
    int n, c = 0;
    scanf("%d", &n);
    for (int i = 0; i < N; i++)
    {
        if (a[i] == n)
        {
        	c++;
        }
    }
    printf("%d\n", c);
}
