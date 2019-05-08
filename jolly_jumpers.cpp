#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int num;

    while(scanf("%d ", &num) != EOF){
        int seq[3000] = {0};
        int diff[3000]= {0};
        bool det = true;

        for(int i=0; i<num; i++){
            scanf("%d", &seq[i]);
            if(i>0){
                diff[abs(seq[i]-seq[i-1])] = 1;
            }
        }

        for(int i=1; i<=num-1; i++){
            if(diff[i] == 0)
            {
                det = false;
            }
        }

        if(det)
            printf("Jolly\n");
        else
            printf("Not jolly\n");

    }
}
