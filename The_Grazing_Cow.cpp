#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n, d, l;
    float result = 0;
    float pi = 2*acos(0);

    scanf("%d\n", &n);


    for(int i =0; i<n; i++)
    {
        scanf("%d %d", &d, &l);
        result = 2 * l*l * pi;
        printf("%f", result);
    }
}
