#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n;
    int x[100],y[100];
    float r;
    float dis;
    int det;
    float cen_x;
    float cen_y;

    while(scanf("%d", &n)){
        if(n == 0)  break;
        dis=0;
        cen_x=0.0;
        cen_y=0.0;
        det = 0;

        for(int i =0;i<n;i++){
            scanf("%d %d",&x[i],&y[i]);
            cen_x += x[i];
            cen_y += y[i];
        }
        scanf("%f",&r);

        cen_x = cen_x/n;
        cen_y = cen_y/n;

        //printf("Center of x: %f\n",cen_x);
        //printf("Center of y: %f\n",cen_y);

        for(int i =0;i<n;i++){

            dis=sqrt((x[i]-cen_x)*(x[i]-cen_x)+(y[i]-cen_y)*(y[i]-cen_y));
            //printf("Distance : %f\n", dis);
            if(dis>r){
                printf("There is no way of packing that polygon.\n");
                i=n;
                det =1;
            }
        }

        if(det ==0) printf("The polygon can be packed in the circle.\n");




    }

    return 0;
}
