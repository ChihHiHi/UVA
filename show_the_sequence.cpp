
#include <stdio.h>
#include <stdlib.h>

long long ans[50];


void seq_det(char q_seq[]){
    int sign = 1;
    int ans_tmp = 0;
    char equa = '0';
    int i =0;
    for(i =1; q_seq[i]; i++){
        if(q_seq[i] == '-')
            sign = -1;
        else if(q_seq[i] >='0' && q_seq[i] <= '9')
        {
            ans_tmp = ans_tmp*10 + q_seq[i]-'0';  //Without '0' will be wierd

        }
        else{
            equa = q_seq[i];
            break;
        }
    }
    ans_tmp = ans_tmp * sign;

    if(equa == '+'){
        seq_det(q_seq+i+1);
        int des = ans[0];
        ans[0] = ans_tmp;
        for (i = 1; i< 50; i++){
           int tmp = ans[i];
           ans[i] = ans[i-1] + des;
           des = tmp;
        }
    }
    else if(equa == '*'){
        seq_det(q_seq+i+1);
        ans[0] = ans[0]*ans_tmp;
        for (i = 1; i< 50; i++){
            ans[i] = ans[i] * ans[i-1];
        }
    }
    else{
        for(i = 0; i<50; i++)
            ans[i] = ans_tmp;

    }

}


int main(){
    char q_seq[1024];
    int n;
    while(scanf("%s %d",q_seq, &n) == 2){
        seq_det(q_seq);
        for(int i =0; i<n; i++){
            printf("%lld%c", ans[i], i == n - 1 ? '\n' : ' ');
        }
    }

    return 0;


}
