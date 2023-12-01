/*
#include<stdio.h>
int main(){
    int n,row,col,k=0;
    scanf("%d",&n);

    k = n*2-2;
    //upper part
    for(row=n; row>=1; row--){

        for(col=n; col>=row; col--) printf("*");

        for(col=1; col<=k; col++){
            printf(" ",col);
        }

        for(col=n; col>=row; col--) printf("*");

        k-=2;
        printf("\n");
    }



    //Alraaafi
}

*/

#include<stdio.h>
int main(){
    int n,row,col;
    scanf("%d",&n);

    //upper part
    for(row=1; row<=n; row++){

        for(col=1; col<=row; col++){
            printf("%d",col);
        }

        for(col=n-1; col>=row; col--) printf(" ");

        for(col=n-1; col>=row; col--) printf(" ");

        for(col=row; col>=1; col--){
            printf("%4d",col);
        }
        printf("\n");
    }



    //Alraaafi
}
