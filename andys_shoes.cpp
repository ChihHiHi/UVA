#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int cur_n=0;
    //int result[10000];

    scanf("%d", &n);

    while(cur_n != n){

        int pair_n;
        int left[10000],right[10000];
        int step=0;

        scanf("%d", &pair_n);

        for(int i =0;i<pair_n;i++){
            scanf("%d %d", &left[i], &right[i]);
        }

        int tmp;

        for(int i =0;i<pair_n;i++){
            for(int j =i;j<i+pair_n;j++){
                int j_new = j%pair_n;
                if(left[i] == right[j_new] && i != j_new){
                    step++;
                    tmp = right[i];
                    right[i] = right[j_new];
                    right[j_new] = tmp;
                    j = i+pair_n;

                }
                else if(left[i] == right[j_new] && i==j_new)
                    j = i+pair_n;
            }

        }

        //result[cur_n] =step;

        printf("%d\n", step);

        cur_n++;
    }


    return 0;

}
