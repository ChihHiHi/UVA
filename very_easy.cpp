#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long long formula(int n, int a)
{
    long long result = 0;
    for(int i =1; i<=n; i++)
    {
        result += i*pow(a,i);
    }

    return result;
}

int main()
{
    int n, a;

    while(scanf("%d %d", &n, &a) != EOF)
    {
        if(n<=150 && n>0 && a<=15 && a>=0)
            printf("%lli\n", formula(n,a));
    }

    return 0;
}



