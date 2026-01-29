#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        char ch='A'+(i-1);
        for(int j=1; j<i+1; j++){
            printf("%c",ch);
        }
        printf("\n");
    }
    return 0;
}