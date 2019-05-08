#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, k;
    int result;

    while(scanf("%d %d", &n, &k) != EOF)
    {
        result = n;
        while( n>=k )
        {
            result +=  n/k;
            n = n%k + n/k;
        }
        printf("%d\n", result);

    }

    return 0;
}
