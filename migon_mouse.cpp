#include <stdio.h>
#include <stdlib.h>

int main(){
    int row, col;
    int maze[100][100]={-1};

    for(int i =0;i<100;i++){
        for(int j =0;j<100;j++){
            maze[i][j] = -1;
        }
    }

    while(scanf("%d %d", &row, &col)){
        if  (row == -1) break;
        for(int j =1;j<col+1;j++){
            for(int i =1;i<row+1;i++)
                scanf("%d", &maze[i][j]);
        }

        if(maze[1][1]==-1)  printf("F\n");
        int cur_x, cur_y=0;
        int last_x, last_y;
        /*else{
            while(cur_x != row-1 || cur_y != col-1){
                if(maze[cur_x+1])[cur_y]==0 || maze[cur_x][cur_y+1]==0){
                    last_x = cur_x;
                    last_y = cur_y;
                    cur_x++;
                }
                else if(maze[cur_x+1])[cur_y]==0 || maze[cur_x][cur_y+1]==-1)
                    cur_x++;
                else if(maze[cur_x+1])[cur_y]==-1 || maze[cur_x][cur_y+1]==0)
                    cur_y++;
                else if(maze[cur_x+1])[cur_y]==-1 || maze[cur_x][cur_y+1]==-1)


            }

        }*/
            for(int j =0;j<col+2;j++){
            for(int i =0;i<row+2;i++)
                printf("%d", maze[i][j]);
            printf("\n");
        }

    }


}
