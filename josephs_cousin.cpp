#include <stdio.h>
#include <stdlib.h>

int main(){

    int prime[3502];
    int mark[35000]={0};
    int cur_pos=0;

    for(int i=2;i<35000;i++)
    {
        if(mark[i]==0){
            prime[cur_pos] = i;
            cur_pos++;
            if(cur_pos==3502)   i=35000;
        }
        for(int j=1;i*j<35000;j++){
            mark[i*j] = 1;
        }
    }

   /* for(int i =0;i<3502;i++){
        printf("Prime[%d]:%d \n",i, prime[i]);
    }*/

    int people;
    while(scanf("%d", &people)){
        if(people == 0) break;

        int alive[3501]={0};
        int alive_people = people;
        cur_pos = 0;
        int cnt =0;
        int mod_num=0;

        while(alive_people != 1){

            mod_num = prime[cur_pos]%alive_people;
            if(mod_num == 0) mod_num = prime[cur_pos];


            for(int i=0;i<people;i++){
                //printf("Mod number: %d\n", mod_num);
                //printf("i=%d\n",i);
                //printf("Alive people: %d\n", alive_people);
                if(alive[i] == 0){
                    cnt++;
                    if(cnt==mod_num){
                        alive[i] = 1;
                        cnt = 0;
                        cur_pos++;
                        alive_people--;
                        if(alive_people == 1)   i=people;
                        mod_num = prime[cur_pos]%alive_people;
                        if(mod_num == 0) mod_num = prime[cur_pos];
                    }
                }
            }

        }

        for(int i =0; i<people;i++){
            if(alive[i] == 0){
                printf("%d\n", i+1);
            }
        }



    }
}

