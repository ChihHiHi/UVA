
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


void alph_transform(char s[], int m, int s_len){
    printf("s[0]: %c\n",s[0]);
    int tmp = 1;
    int m_new = m;
    int pos = -1;
    int s_len_now = strlen(s);
    if( s_len_now == 1)
    {
        ans[0] = s[0];
    }
    else{
        while(m_new>0){
            m_new = m_new - factorial(s_len_now-tmp);
            pos ++;
            ans[pos] = s[0];
            if(m_new< 0)
            {
                m_new = m_new + factorial(s_len_now-tmp);

                alph_transform(s+pos+1, m_new,input_len);
                break;
            }
            else if(m_new==0)
            {
                int j_tmp=0;
                for(int j = s_len-1; j>=0;j--){
                    if(j_tmp == pos){
                        j_tmp ++;
                        ans[j_tmp] = s[j];
                        j_tmp ++;
                    }
                    else{
                        printf("pos: %d, j_tmp: %d, j: %d\n",pos,j_tmp,j);
                        ans[j_tmp] = s[j];
                        printf("s: %c\n",s[j]);
                        printf("ans[%d]: %c\n",j_tmp,ans[j_tmp]);
                        j_tmp ++;
                    }
                }
            }
        }

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
            input_len = strlen(s);
            alph_transform(s, m,input_len);
            printf("Case %d: ", i+1);
            for(int r=0; r<strlen(s);r++){
                printf("%c", ans[r]);
            }
            printf("\n");
        }

    }

    return 0;
}
