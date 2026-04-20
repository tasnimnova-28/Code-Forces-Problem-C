#include<stdio.h>

int main(){
    int test;
    scanf("%d", &test);

    for(int i = 0; i < test; i++){
        int n;
        scanf("%d", &n);

        if(n == 0){
            printf("0");
        } else {
            if(n < 0){
                n = -n;
            }

            while(n != 0){
                printf("%d ", n % 10);
                n /= 10;
            }
        }

        printf("\n");
    }  

    return 0;
}