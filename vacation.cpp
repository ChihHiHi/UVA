#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char mom[100],dad[100];
    int case_cnt=1;

    while(scanf("%s", mom)){
        if(mom[0]=='#') break;
        scanf("%s", dad);

        int lcs[101][101]={0};
        int max_num=0;
        int max_tmp;

        for(int i =0;i<strlen(mom);i++){
            for(int j =0;j<strlen(dad);j++){
                if(lcs[i][j+1]>lcs[i+1][j]) max_tmp = lcs[i][j+1];
                else    max_tmp = lcs[i+1][j];
                if(mom[i] == dad[j]){
                    lcs[i+1][j+1] = lcs[i][j]+1;
                }
                else    lcs[i+1][j+1] = max_tmp;
                if(lcs[i+1][j+1]>max_num)   max_num = lcs[i+1][j+1];
            }
        }
/*
        for(int i =1;i<strlen(mom)+1;i++){
            for(int j=1;j<strlen(dad)+1;j++){
                printf("%d", lcs[i][j]);
            }
            printf("\n");
        }
*/

        printf("Case #%d: you can visit at most %d cities.\n", case_cnt, max_num);
        case_cnt++;

    }

    return 0;
}
