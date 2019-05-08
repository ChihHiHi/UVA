#include <stdio.h>
#include <stdlib.h>

int main(){

    int n,m;
    int field = 1;
    while(scanf("%d %d", &n, &m)){
        if(n==0 && m==0)    break;

        char mine_map[101][101];
        for(int i =0;i<n; i++){
            scanf("%s", mine_map[i]);
        }

        char result_map[104][104]={0};

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mine_map[i][j]=='*'){
                    result_map[i][j]++;
                    result_map[i+1][j]++;
                    result_map[i+2][j]++;
                    result_map[i][j+1]++;
                    result_map[i+2][j+1]++;
                    result_map[i][j+2]++;
                    result_map[i+1][j+2]++;
                    result_map[i+2][j+2]++;
                }
            }
        }

          for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                result_map[i+1][j+1] = result_map[i+1][j+1]+'0';
                if(mine_map[i][j]=='*'){
                    result_map[i+1][j+1]='*';
                }
            }
        }

        if(field !=1)   printf("\n");

        printf("Field #%d:\n", field);

        for(int i=1;i<n+1;i++){
            for(int j=1;j<m+1;j++){
                printf("%c", result_map[i][j]);
                if(j==m)    printf("\n");
            }
        }

        field++;

    }

    return 0;
}
