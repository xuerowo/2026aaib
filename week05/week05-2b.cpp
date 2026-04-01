// week05-2b.cpp SOIT106_BASE_009
#include <stdio.h>
int main()
{
    int a[3];
    int B = 0, S = 100001;
    for (int i = 0; i < 3; i++)
    {
    	scanf("%d", &a[i]);
    	if (a[i] > B)
    	{
    		B = a[i];
    	}
    	if (a[i] < S)
    	{
    		S = a[i];
    	}
    }
    printf("%d\n",B - S);
}
