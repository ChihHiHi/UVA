#include <stdio.h>
#include <stdlib.h>


int find_com_div(int a, int b){
    if(b==0) return (b+1);

    else if(a%b !=0)
        find_com_div(b, a-(a/b)*b);
    else if(a%b == 0)
        return b;

}

int main(){

    int x,y;


    while(scanf("%d %d", &x, &y) != EOF){

        int a, b; //a is the bigger one
        int tmp;
        int det =0;
        if(x<=y){
            b = x;
            a = y;
            det = 1;
        }
        else{
            a = x;
            b = y;
        }

        //printf("A: %d, B: %d\n", a,b);

        int d= find_com_div(a, b);

        //printf("D: %d", d);
        int res_a,res_b;

        if(d != 1){
            a = a/d;
            b = b/d;
        }

        if(b ==0){
            res_a =1;
            res_b =0;
            d = a;
        }
        else if(a%b ==(b-2)){
            if(b ==1){
                res_b = -1*(a-1);
                res_a = 1;
            }
            else{
            res_b = a/b+1;
            res_a = -1;
            }
        }
        else if(a%b == 1){
            res_a = 1;
            res_b = -1*(a/b);
        }
        else if (d ==x){
            res_a = 1;
            res_b = 0;
        }
        else {
            tmp = a%b;
            int i =2;
            while((tmp*i)%b != 1){
                if((tmp*i)%b == b-1)  break;
                i++;
            }

            if(tmp*i%b ==1){
                res_a = i;
                res_b = -1*(a*i-1)/b;
            }
            else if ((tmp*i)%b == (b-1)){

                res_a = -i;
                res_b = (a*i-b+1)/b+1;
            }
        }

        if(det == 1){
            tmp = res_a;
            res_a = res_b;
            res_b = tmp;
        }

        printf("%d %d %d\n", res_a, res_b, d);
    }

    return 0;

}

