#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int case_cnt;
    int n,m;
    int cur_case=0;

    scanf("%d", &case_cnt);

    while(cur_case<case_cnt){

        int t_size[6]={0};
        //char fir[100],second[100];
        int fir_size[30];
        int sec_size[30];

        scanf("%d %d", &n, &m);
        for(int i=0;i<m;i++){
            char fir[10],second[10];
            scanf("%s %s",fir,second);
            //printf("P:%s\n",fir);

            if(strcmp(fir,"XXL")==0) fir_size[i] = 0;
            else if(strcmp(fir,"XL") ==0) fir_size[i] = 1;
            else if(strcmp(fir,"L")==0)  fir_size[i] = 2;
            else if(strcmp(fir,"M")==0)  fir_size[i] = 3;
            else if(strcmp(fir,"S")==0)  fir_size[i] = 4;
            else if(strcmp(fir,"XS")==0) fir_size[i] = 5;

            if(strcmp(second,"XXL")==0) sec_size[i] = 0;
            else if(strcmp(second,"XL") ==0) sec_size[i] = 1;
            else if(strcmp(second,"L")==0)  sec_size[i] = 2;
            else if(strcmp(second,"M")==0)  sec_size[i] = 3;
            else if(strcmp(second,"S")==0)  sec_size[i] = 4;
            else if(strcmp(second,"XS")==0) sec_size[i] = 5;
        }

        for(int i =0;i<6;i++){
            t_size[i] = n/6;
        }

        //t_size[0]:XXL ; t_size[5]:XS


        for(int i=0;i<m;i++){
            if(t_size[fir_size[i]]!=0){
                switch(fir_size[i]){
                    case 0:
                        t_size[0]--;
                        break;
                    case 1:
                        t_size[1]--;
                        break;
                    case 2:
                        t_size[2]--;
                        break;
                    case 3:
                        t_size[3]--;
                        break;
                    case 4:
                        t_size[4]--;
                        break;
                    case 5:
                        t_size[5]--;
                        break;
            }
            }
            else{
                switch(sec_size[i]){
                    case 0:
                        t_size[0]--;
                        break;
                    case 1:
                        t_size[1]--;
                        break;
                    case 2:
                        t_size[2]--;
                        break;
                    case 3:
                        t_size[3]--;
                        break;
                    case 4:
                        t_size[4]--;
                        break;
                    case 5:
                        t_size[5]--;
                        break;
                }
            }

        }

        int det = 0;

        for(int i =0;i<6;i++){
            if(t_size[i] <0)
            {
                printf("NO\n");
                i=6;
                det =1;
            }
        }

        if(det ==0) printf("YES\n");





        cur_case++;
    }

    return 0;
}
