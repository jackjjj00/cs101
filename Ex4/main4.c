#include <stdio.h>
#include <stdlib.h>
int main(){
    int i=12345,d=0 ;
    d=i%10;
    if(i<1000){
        i=d*1000+i-d;
        printf("%d",i);
    }
    else{
        int k=i/1000;
        if(k%10){
            k%=10;
            i=i+abs(d-k)*999;
        }
        printf("%d",i);
    }
    return 0;
}
