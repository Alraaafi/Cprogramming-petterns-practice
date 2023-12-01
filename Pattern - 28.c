#include<stdio.h>
int main(){
    int n,row,col,k=0;
    scanf("%d",&n);

    //upper part
    for(row=1; row<=n; row++){
        for(col=n-1; col>=row; col--) printf(" ");
        for(col=1; col<row; col++) {
                printf("* ");
        }
        printf("*\n");
    }

    //Lower part
    for(row=n-1; row>=1; row--){
        for(col=n-1; col>=row; col--) printf(" ");
        for(col=1; col<row; col++) {
                printf("* ");
        }
        printf("*\n");
    }


    //Alraaafi
}

