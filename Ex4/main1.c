#include <stdio.h>
int main(){
    int n=7;
    for(int i=1;i<=n;i++){
        for(int j=1; j<=n;j++){
            if(i+j>=n+1){
                printf(" %d", i);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
