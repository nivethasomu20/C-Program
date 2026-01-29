#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        char ch='A';
        for(int k=1; k<=n-i; k++){
            printf(" ");
        }
        for(int j=1; j<=i; j++){
            printf("%c",ch++);
        }
        ch=ch-2;
        for(int l=1; l<i; l++){
            printf("%c", ch--);
        }
        printf("\n");
    }
    return 0;
}