#include <stdio.h>

int main()
{   
    int i=1540;
    int k=i-1500;
    if(k<=0){
        printf("70元\n");
    }
    else if (k<=100){
         printf("80元\n");
    }
    else{
        int count =k/100 ;
        if(k%100){
          int sum = (count+1)*10+70;
          printf("%d元\n", sum);
        } 
        else{
            int sum = (count)*10+70;
            printf("%d元\n", sum);
        }
    }
    return 0;
}
