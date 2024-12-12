#include <stdio.h>
int main()
{
    int x=1;
    long ipi =0;
    int sign =1;
    double PI =4.0f ;

     for(int x=3;;x+=2){
        sign*=-1;
        PI+=sign*(4.0/x);
        ipi=PI*100000;
        if(ipi==314159){
            printf("PI= %.5f\n",PI);
            printf("x= %d",x);
            break;
         }
     }

    return 0;
}
