
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

using namespace std;
int main(){

    int rows, columns, entry;
    while(scanf("%d %d %d", &rows, &columns, &entry)){
        if(rows == 0 && columns == 0 && entry == 0) break;

        char map_robot[11][11];
        int map_det[11][11]={0};
        int i =0;


        for(int i =0; i<rows;i++)
            scanf("%s", map_robot[i]);

        int i_cur=0;
        int j_cur=entry-1;
        int step = 0;
        int step_loop = 0;

        map_det[i_cur][j_cur] = 1;

        while(i_cur!=-1 && i_cur != rows && j_cur!=-1 && j_cur!=columns){
            if(map_robot[i_cur][j_cur] == 'E')
                j_cur ++;

            else if(map_robot[i_cur][j_cur] == 'W')
                j_cur --;

            else if(map_robot[i_cur][j_cur] == 'S')
                i_cur ++;

            else if(map_robot[i_cur][j_cur] == 'N')
                i_cur --;

            if(map_det[i_cur][j_cur]==0)
                map_det[i_cur][j_cur] ++;
            else if(map_det[i_cur][j_cur]==1){
                map_det[i_cur][j_cur] ++;
                step_loop ++;
            }
            else if(map_det[i_cur][j_cur]==2)
                break;

            step++;
        }

        if(step_loop != 0)
            printf("%d step(s) before a loop of %d step(s)\n",step-step_loop*2+1,step_loop);
        else
            printf("%d step(s) to exit\n", step-step_loop*2);

    }
    return 0;
}
