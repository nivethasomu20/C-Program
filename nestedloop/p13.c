#include<stdio.h>
int main(){
    int n,sum=1;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<i+1; j++){
            printf("%d ",sum);
            sum++;
        }
        printf("\n");
    }
    return 0;
}