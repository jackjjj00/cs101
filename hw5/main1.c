#include <stdio.h>

int main()
{
    int n=7,j;
    
    for(int i=1;i<=n;i++){
        for(j=1;j<=n;j++){
        if(j+i>=n+1){
            printf("%d ", i);
        }
        else{
           printf(" "); 
        }
        
        }
         printf("\n");
    
    }

    return 0;
}

