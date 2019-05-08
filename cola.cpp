#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    while(scanf("%d", &n) != EOF){

    int result =n;
    if(n%3 ==2){
        n = n+1;
        while(n/3>=3){
            result += n/3;
            n = n/3;
        }
        result+=(n+1)/3;
    }

    printf("Result: %d\n", result);


    }

    return 0;

}
