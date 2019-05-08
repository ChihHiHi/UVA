#include <stdio.h>
#include <stdlib.h>

int main(){
    int case_n;
    int case_pos=0;


    scanf("%d", &case_n);

    while(case_pos<case_n){
        int start_wheel[4];
        int end_wheel[4];
        scanf("%d %d %d %d",&start_wheel[0],&start_wheel[1],&start_wheel[2],&start_wheel[3]);
        scanf("%d %d %d %d",&end_wheel[0],&end_wheel[1],&end_wheel[2],&end_wheel[3]);

        int forbidden_n;
        int forbidden_wheel[50][4];
        scanf("%d", &forbidden_n);

        for(int i=0;i<forbidden_n;i++){
            scanf("%d %d %d %d", &forbidden_wheel[i][0],&forbidden_wheel[i][1],&forbidden_wheel[i][2],&forbidden_wheel[i][3]);
        }

        int step=0;
        int corr_cnt=0;
        int pos=0;

        while(corr_cnt !=4){
            if (pos>=4) pos = pos%4;
            if((start_wheel[pos]-end_wheel[pos])<((end_wheel[pos]+10-start_wheel[pos])%10))
            {
                for(int i=0;i<start_wheel[pos]-end_wheel[pos];i++){
                    start_wheel[pos] = start_wheel[pos]+1;
                    for(int j=0;j<forbidden_n;j++){
                        if(start_wheel[pos] == )

                    }
                }
            }

        }


        printf("%d %d %d %d",forbidden_wheel[0][0],forbidden_wheel[0][1],forbidden_wheel[0][2],forbidden_wheel[0][3]);



        case_pos++;
    }

    return 0;
}


