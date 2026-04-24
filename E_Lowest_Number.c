#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int minValue = arr[0];
    int position = 1;

    for(int i = 1; i < n; i++){
        if(arr[i] < minValue){
            minValue = arr[i];
            position = i + 1;
        }
    }

    printf("%d %d\n", minValue, position);

    return 0;
}