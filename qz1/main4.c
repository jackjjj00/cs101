#include <stdio.h>
int main()
{   
    int x=9;
    for(int y=1;y<=x*x;y++){
        int ver =(y-1)/x+1; //行
        int hor =(y-1)%x+1;//列
        printf("%d*%d=%d\t",ver,hor,ver*hor);
        //列數9的時候換行
        if(hor==x){
             printf("\n"); 
        }
    }
    return 0 ;
}
