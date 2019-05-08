
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ans[21];
int input_len;

int factorial(int x){
    int result = x;
    for(int j = x-1; j>0;j--){
        result = result * j;
    }

    return result;
}


void alph_transform(char s[], int m, int ans[]){
    int tmp;
    int m_new = m;
    int s_len_now = strlen(s);
    printf("S_len_now: %d\n", s_len_now);

    if( s_len_now == 1)
    {
        ans[0] = s[0];
    }
    else{
        int i = 1;

        while(m_new- i*factorial(s_len_now-1)>=0)
        {
            //printf("S_len_now: %d\n", s_len_now);
            tmp = m_new- i*factorial(s_len_now-1);
            i++;
        }
        i--;

        if(tmp == 0)
        {
            i--;
            ans[i] = s[0];
            printf("i: %d\n", i);
        }

        printf("%d %d\n",tmp, i);



    }

}








int main(){
    int n;

    if(scanf("%d", &n) == 1){
        int i;
        for(i =0; i < n; i++){
            char s[21];
            int m; //Order of lexicographic permutations
            scanf("%s %d", s, &m);
            alph_transform(s, m, ans);
            printf("Case %d: ", i+1);
            for(int r=0; r<strlen(s);r++){
                printf("%c", ans[r]);
            }
            printf("\n");
        }

    }

    return 0;
}
