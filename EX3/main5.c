#include <stdio.h>

int main()
{
    int i=20 ;
    if(i >=240 ){
        printf("240元");
    }
    else if(i<=30 ){
        printf("免費");
    }
    else{
        if(i %30){
            int cost =((i/30)+1)*30 ;
            printf("%d元", cost);
        }
        else{
             printf("%d元", i);
        }
    }
    return 0;
}

