#include<stdio.h>
int main(){
    int n,row,col;
    scanf("%d",&n);

    //upper part
    for(row=n; row>=1; row--){
        for(col=n-1; col>=row; col--) printf(" ");
        for(col=1; col<row; col++){
            printf("* ",col);
        }
        printf("*\n");
    }
    //lower part
    for(row=1; row<=n; row++){
        for(col=n-1; col>=row; col--) printf(" ");
        for(col=1; col<row; col++){
            printf("* ",col);
        }
        printf("*\n");
    }
    //Alraaafi
}

