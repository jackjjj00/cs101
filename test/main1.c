#include <stdio.h>

int main()
{   
    int count =1;
    char a[]= "AABBCCCddd" ; 
    for(int i=0;i<sizeof(a);i++){

        if(a[i]!=a[i+1]){
            count =1;
        }
        else{
            count ++;
            printf("%c%d",a[i] , count );
        }


    }

    return 0;
}

