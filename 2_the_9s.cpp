#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cal_9(char num[]){

        int num_len = strlen(num);
        int odd =0;
        int even =0;

        for(int i =0;i<num_len/2;i++){
            odd += num[2*i]-'0';
            even += num[2*i+1]-'0';
        }

        if(num_len%2 ==1)   odd += num[num_len-1]-'0';

        //printf("Odd: %d\n", odd);
        //printf("Even: %d\n", even);
        int total = odd+ even;
        return total;
}

int main(){

    char num[1000];

    while(scanf("%s", num)){
        if(num[0] == '0')   break;

        /*
        int num_len = strlen(num);
        int odd =0;
        int even =0;

        for(int i =0;i<num_len/2;i++){
            odd += num[2*i]-'0';
            even += num[2*i+1]-'0';
        }

        if(num_len%2 ==1)   odd += num[num_len-1]-'0';

        printf("Odd: %d\n", odd);
        printf("Even: %d\n", even);
        int total = odd+ even;
        */

        //cal_9(num);

        int recur_cnt = 1;

        if(cal_9(num) %9 !=0){
            printf("%s is not a multiple of 9.\n", num);
        }
        else{
            int det = cal_9(num);
            char tmp[50];

            while(det>10){
                char tmp[50];
                sprintf(tmp,"%d",det);
                det = cal_9(tmp);
                recur_cnt++;
            }

            printf("%s is a multiple of 9 and has 9-degree %d.\n", num, recur_cnt);
        }

    }

    return 0;

}
