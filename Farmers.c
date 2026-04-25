#include<stdio.h>
int main(){
    int T;
    scanf("%d",&T);
    while(T--){
        int m1, m2, day;
        scanf("%d %d %d",&m1, &m2, &day);
        int work = m1*day;
        int total = m1+m2;
        int newDays = work/total;
        int result = day-newDays;
        printf("%d\n",result);
    }
    return 0;
}