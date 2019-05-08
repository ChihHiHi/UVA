#include <stdio.h>
#include <stdlib.h>


int pow(int a, int b)
{
    int result =1;
    while(b>0)
    {
            result = result*a;
            b--;
    }
    return result;
}

int main()
{
    int p;
    scanf("%d", &p);

    for(int i =0; i<p; i++)
    {
        int n;
        scanf("%d", &n);

        int result =0;
        int tmp = n;


        bool temp[800] = {0};

        while(1)
        {
            int j = 8;
            result =0;

            while(j>0)
            {
                result += (tmp/pow(10,j))*(tmp/pow(10,j));
                tmp = tmp%pow(10,j);
                j--;
            }
            result += (tmp%10)*(tmp%10);

            //printf("result: %d\n", result);
            tmp = result;

            /*result = (result/100)* (result/100) + (result/10-(result/100)*10)*(result/10-(result/100)*10) + (result%10)*(result%10);
            temp[result] = 1;
            printf("result: %d\n", result);*/

            if(result == 1){
                printf("Case #%d: %d is a Happy number.\n", i+1, n);
                break;
            }
            else if(temp[result] == 1){
                printf("Case #%d: %d is an Unhappy number.\n", i+1, n);
                break;
            }
            temp[result] =1;
        }


    }
}









