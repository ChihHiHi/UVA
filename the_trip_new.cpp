#include <stdio.h>
#include <stdlib.h>

int main(){

	int num_student;

	while(scanf("%d", &num_student)){
		if(num_student ==0) break;

		float shopping_list[1000];
		float total_spend=0.0;
		int shopping_int[1000];

		for(int i =0; i<num_student;i++){
			scanf("%f", &shopping_list[i]);
			total_spend += shopping_list[i];
			shopping_int[i] = (int)(shopping_list[i]*1000.0);
        }
        int total_cost = 0;

        total_cost = (int)(total_spend*1000.0);

        printf("%d\n", total_cost);

        int avg_cost = total_cost/num_student;
        printf("%d\n", avg_cost);



	}

}
