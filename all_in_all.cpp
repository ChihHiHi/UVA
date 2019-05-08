#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char sub_str[500];
    char str[1000];

    while(scanf("%s %s",sub_str, str) !=EOF){
        int sub_pos = 0;
        int str_pos = 0;
        int sub_len = strlen(sub_str);
        int str_len = strlen(str);
        int correct_cnt = 0;

        //printf("Sub_len: %d\n",sub_len);
        //printf("Str_len: %d\n",str_len);

        for(sub_pos = 0;sub_pos<sub_len;sub_pos++){
            while(sub_str[sub_pos] != str[str_pos]){
                str_pos++;
                if(str_pos == str_len-1)
                {
                    break;
                }
            }

            if(sub_str[sub_pos] == str[str_pos]&&str_pos<str_len){
                str_pos++;
                correct_cnt ++;
                //printf("Position: %d, SubPosition: %d\n",str_pos,sub_pos);
            }
            else if(str_pos == str_len-1)
                break;

        }

        if(correct_cnt == sub_len)  printf("Yes\n");
        else    printf("No\n");


    }

    return 0;
}
