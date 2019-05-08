#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char num[1000];

    while(scanf("%s", num)){

        if(num[0] == '0')   break;

        int even=0;
        int odd=0;

        int num_len = strlen(num);

        for(int i=0;i<num_len/2;i++){
            odd += num[2*i]-'0';
            even += num[2*i+1]-'0';
            //printf("even: %d\n", even);
            //printf("odd: %d\n", odd);
        }
        if(num_len%2==1)    odd+= num[num_len-1]-'0';
        //printf("even_end: %d\n", even);
        //printf("odd_end: %d\n", odd);

        int result = odd - even;

        //printf("result: %d\n", result);

        if(result ==0 || result ==11 || result ==-11)   printf("%s is a multiple of 11.\n", num);
        else    printf("%s is not a multiple of 11.\n", num);


    }

    return 0;
}
