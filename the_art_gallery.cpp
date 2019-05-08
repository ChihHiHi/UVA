
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int n;
    int x[50],y[50];
    float a,b,c;


    while(scanf("%d",&n)){
        if(n==0)    break;

        float angle=0.0;
        int det=0;

        for(int i =0;i<n;i++){
            scanf("%d %d", &x[i],&y[i]);
        }

        for(int i=0;i<n;i++){

            if(i == n-1){
                a = sqrt((x[i-1]-x[i])*(x[i-1]-x[i])+(y[i-1]-y[i])*(y[i-1]-y[i]));
                b = sqrt((x[0]-x[i])*(x[0]-x[i])+(y[0]-y[i])*(y[0]-y[i]));
                c = sqrt((x[i-1]-x[0])*(x[i-1]-x[0])+(y[i-1]-y[0])*(y[i-1]-y[0]));
            }
            else if (i == 0){
                a = sqrt((x[n-1]-x[i])*(x[n-1]-x[i])+(y[n-1]-y[i])*(y[n-1]-y[i]));
                b = sqrt((x[i+1]-x[i])*(x[i+1]-x[i])+(y[i+1]-y[i])*(y[i+1]-y[i]));
                c = sqrt((x[n-1]-x[i+1])*(x[n-1]-x[i+1])+(y[n-1]-y[i+1])*(y[n-1]-y[i+1]));
            }
            else{
                a = sqrt((x[i-1]-x[i])*(x[i-1]-x[i])+(y[i-1]-y[i])*(y[i-1]-y[i]));
                b = sqrt((x[i+1]-x[i])*(x[i+1]-x[i])+(y[i+1]-y[i])*(y[i+1]-y[i]));
                c = sqrt((x[i-1]-x[i+1])*(x[i-1]-x[i+1])+(y[i-1]-y[i+1])*(y[i-1]-y[i+1]));
            }
            angle = (int)((a*a+b*b-c*c)/(2*a*b)*10000)/10000.0;
            //printf("angle:%f\n",angle);

            if(angle>0.0)
            {
                printf("Yes\n");
                i=n;
                det = 1;
            }
            /*
            printf("a:%f\n",a);
            printf("b:%f\n",b);
            printf("c:%f\n",c);
            */

        }
        if(det ==0) printf("No\n");



    }

    return 0;

}
