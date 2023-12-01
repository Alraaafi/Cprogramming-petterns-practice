#include<stdio.h>
int main(){
    int n,row,col,k=0;
    scanf("%d",&n);

    //upper part
    for(row=n; row>=1; row--){
        //for(col=n-1; col>=row; col--) printf(" ");
        for(col=row; col<n; col++) {
                printf("%c ",col+64);
        }
        printf("%c\n",col+64);
    }



    //Alraaafi
}

