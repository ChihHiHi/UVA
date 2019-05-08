
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char a[251],b[251];

    while(scanf("%s",a) !=EOF)
{
    scanf("%s", b);

    int result = 0;
    int result_tmp = 0;
    int a_len = strlen(a);
    int b_len = strlen(b);
    int max_len;
    int tmp[502]={0};
    int ans[502];

    if(a_len>b_len)
        max_len = a_len;
    else
        max_len = b_len;

    int tmp_int=0;


    for (int i = 1; i<a_len+1;i++){
        for(int j = 1;j<b_len+1;j++){
            tmp[i+j-2] += ((a[strlen(a)-i]-'0')*(b[strlen(b)-j]-'0'));

            /*if(result_tmp>=10){
                tmp[i+j-1] += result_tmp/10;
                tmp[i+j-2] += result_tmp%10;
            }
            else
                tmp[i+j-2] += result_tmp;
            */

            //printf("First tmp[%d] = %d\n", i+j-2,tmp[i+j-2]);
        }
    }

    for(int i = 1; i<502;i++){
        if(tmp[i-1]>=10)
        {
            tmp[i] += tmp[i-1]/10;
            tmp[i-1] = tmp[i-1]%10;
        }
       //printf("tmp[%d] = %d\n", i-1,tmp[i-1]);
    }

    int result_len=a_len+b_len;

    while(tmp[result_len]==0)
    {
        result_len--;
    }
    for(int t = result_len; t>=0 ;t--){
        printf("%d",tmp[t]);
    }
    printf("\n");

}





/*    for(int i = 0; i<502;i++){
        //ans[i] =  tmp[i]%10 + tmp_int;
        if(tmp[i]>=10){
            tmp[i+1] = tmp[i+1] + tmp[i]/10;
            tmp_int = tmp[i]/10;
        }
        else
            tmp_int = 0;
    }

    for(int i =501; i>=0;i--){
        printf("%d\n",ans[i]);
    }

*/



}
