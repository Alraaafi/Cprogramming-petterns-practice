#include<stdio.h>
int main(){
    int n,row,col,k=0;
    scanf("%d",&n);

    //upper part
    for(row=1; row<=n; row++){
        for(col=1; col<row; col++) {
                k++;
                printf("%d ",k%2);
        }
        printf("%d\n",(++k)%2);
    }


    //Alraaafi
}

