#include <stdio.h>
#include<string.h>
#include<time.h>

#define MAX_NUMBER 69
#define NUMBER_TICKET 7

void lotto(int N){
    srand(1); 
    FILE*fp=fopen("lotto.txt","w");
    
    for(int i=0;i<N;i++){
        int sel_num[NUMBER_TICKET]={0};
        int count =0;
    
         while(count<NUMBER_TICKET){
            int num = rand() % MAX_NUMBERS + 1;
            int stop=0;
            for(int j=0;j<count;j++){
                if (sel_num[j] == num) {
                    stop= 1;
                    break;
                    }   
                
            }
            }
        if (!stop) {
            sel_num[count] = num;
            count++;
        }
        
    for (int k = 0; k < NUMBER_TICKET; k++) {
            fprintf(fp, "%d ", sel_num[k]);
        }
        fprintf(fp, "\n");
    fclose(file);
    }

int main()
{   
    int N;
    scanf("%d",&N);
    lotto(N);
    return 0;
}

}

