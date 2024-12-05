#include <stdio.h>

int main()
{
    int i=3000 ;
    if(i <=1500 ){
        printf("70元");
    }
    else{
        int k= i-1500 ;
        
        if(k%100){
            int cost =((k/100)+1)*10 +70 ;
            printf("%d元", cost);
        }
        else{
            k=70+k/10 ;
            printf("%d元", k);
        }
    }
    return 0;
}

