#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m, x1, y1, x2, y2;
    int left_x, left_y, right_x, right_y;
    int tmp1, tmp2;
    int result;

    while(scanf("%d", &n) != EOF)
    {
        for(int i =0; i <n; i++)
        {
            scanf("%d", &m);
            left_x = -10000;
            left_y = -10000;
            right_x = 10000;
            right_y = 10000;

            for(int j =0; j <m; j++)
            {
                scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
                if(x1>x2)
                {
                    tmp1 = x1;
                    tmp2 = y1;
                    x1 = x2;
                    y1 = y2;
                    x2 = tmp1;
                    y2 = tmp2;
                }

                if(x1> left_x)  left_x = x1;
                if(y1> left_y)  left_y = y1;
                if(x2< right_x) right_x = x2;
                if(y2< right_y) right_y = y2;
            }

            if(right_x > left_x && right_y > left_y)
                result = (right_x - left_x) * (right_y - left_y);
            else
                result = 0;

            printf("Case %d: %d\n", i+1, result);
        }

    }

    return 0;
}
