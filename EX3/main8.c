#include <stdio.h>
int main()
{
    int x=-1 ;
    int y=2 ;
    int z=3 ;
    int sum=x*100+y*10+z;
    if(x<0){
        sum=x*-100+y*10+z;
        printf("%d", sum*-1);
    }
    else
        printf("%d", sum);
    
    return 0;
}

