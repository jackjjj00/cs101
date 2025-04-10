#include <stdio.h>

int my_strlen(char* n){
    if(!*n) return 0;
    return 1+my_strlen(n+1);
    
}
int main(){   
    char n[]="IU is a girl!";
    printf("(%s)len= %d\n", n, my_strlen(n));
    return 0;
}

