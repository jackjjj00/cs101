#include <stdio.h>
#include <string.h>

int main()
{   
    int count =1;
    char a[256]; 
    scanf("%255s",a);
    for(int i=0;i<strlen(a);i++){

        if(a[i]==a[i+1]){
            count ++;
        }
        else{
            printf("%c%d",a[i] , count );
            count=1;
        }


    }
    printf("\n");
    return 0;
}
