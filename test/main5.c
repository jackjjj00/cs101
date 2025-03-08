#include <stdio.h>

void print_sp (int n){
    for(int i=1;i<=n;i++){
        printf(" ");
    }

}
void print_num (int num){
    for (int k=1 ;k<=num;k++){
        printf(" %d", num);
    }
    printf("\n");
}

int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        print_sp(n-i);
        print_num(i);
    }


    return 0;
}
