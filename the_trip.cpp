
#include <stdio.h>
#include <stdlib.h>

int main(){

    int num_student;

    while(scanf("%d",&num_student)){
        if(num_student == 0) break;

        float shopping_list[1000];
        float total_spend=0.0;
        float avg_spend=0.0;


        for(int i =0; i<num_student;i++){
            scanf("%f", &shopping_list[i]);
            total_spend += shopping_list[i];
        }

        avg_spend = total_spend/num_student;




        float max_spend, min_spend;
        float total_cost=0.0;
        float max_total_cost=0.0;
        float min_total_cost=0.0;

        long long int mod_num = avg_spend*10000;
        int max_count =0;
        int min_count =0;



        if((mod_num%100) != 0){
            max_spend = (mod_num/100+1.0)/100.00;
            min_spend = (mod_num/100)/100.00;
        }
        else{
            max_spend = avg_spend;
            min_spend = avg_spend;
        }


        for(int i=0; i<num_student;i++){
            if(shopping_list[i]>avg_spend)
                max_count++;
            else if(shopping_list[i]<avg_spend)
                min_count++;
        }

        for(int i=0; i<num_student;i++){
            if(shopping_list[i]>max_spend)
                max_total_cost+= shopping_list[i]-max_spend;

            if(shopping_list[i]<min_spend)
                min_total_cost+= min_spend-shopping_list[i];
        }
/*
        float det = 0.0;

        for(int i =0; i<num_student;i++){
            if(shopping_list[i]<max_spend)
                det += max_spend - shopping_list[i];
        }
        float det_final = (det-max_total_cost)*1000000;
        if(det_final<0) det_final= -det_final;

*/

        if(max_total_cost>min_total_cost){
            printf("$%.2f\n", max_total_cost);
        }
        else
            printf("$%.2f\n", min_total_cost);






        //if(avg_spend%0.01==0)




    }

    return 0;

}
