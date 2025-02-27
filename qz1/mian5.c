#include <stdio.h>
int main()
{   
    int n=32;
    int j=0;
    while(n){
        if(n&1){
            n/=2;
            j++;  
        }
        n>>=1;
        }
        printf("%d\n",j);
   
    return 0 ;
}
