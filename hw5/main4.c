#include <stdio.h>
#include <stdlib.h>
int main(){   
    int i = 12345,h,k;
    if(i<1000){
        h=i%10; //取個位數
        i=h*1000+i-h;
        printf("%d",i);
    }
    else{
        h=i%10;//取個位數
        //取千位數
        k=i/1000;
        while(k>10){
            k%=10;
        }
        
        i=i+(999*abs(h-k));
        printf("%d",i);
    }

    return 0;
}
