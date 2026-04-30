#include<stdio.h>
#include<string.h>
int main(){
    char str[100005];
    scanf("%s",str);
    int len = strlen(str);
    for(int i=0; i<len; i++){
        if (str[i]== ',')
        {
            str[i] = ' ';
        }
        else if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] += 32;
        }
        else{
            str[i] -= 32;
        }
    }
    printf("%s", str);
    
    
    return 0;
}