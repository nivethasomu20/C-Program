#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<i+1; j++){
            printf("%d",j);
        }
        for(int k=1; k<=2*(n-i); k++){
            printf(" ");
        }
        for(int l=i; l>0; l--){
            printf("%d",l);
        } 
        printf("\n");
        }
    return 0;
}