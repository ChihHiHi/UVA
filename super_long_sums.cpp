#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int times = 0;
    scanf("%d", &n);

    while(times <n)
    {
        long long m;
        scanf("%lli", &m);

        long long t1, t2;
        long long res1 = 0;
        long long res2 = 0;
        for(int i =0; i< m; i++)
        {
            scanf("%lli %lli", &t1, &t2);
            res1 = res1*10 + t1;
            res2 = res2*10 + t2;
        }

        long long result = 0;
        result = res1 + res2;

        printf("%lli\n", result);

        printf("\n");

        times++;
    }
}
