#include<stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
    char s[10001];
    scanf("%s", s);
    int capCount =0, smlCount=0, digcount=0;
    for(int i=0; s[i] != '\0'; i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            capCount++;
        }
        else if(s[i] >= 'a' && s[i] <= 'z'){
            smlCount++;
        }
        else if(s[i] >= '0' && s[i] <= '9'){
            digcount++;
        }
    }
    printf("%d %d %d\n", capCount, smlCount, digcount);
}
return 0;
}