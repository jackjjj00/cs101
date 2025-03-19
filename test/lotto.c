#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_NUMBER 69
#define NUMBER_TICKET 7

int main() {
    int N,c=0;
    scanf("%d", &N);
    srand(1);  
    FILE *fp = fopen("lotto.txt", "w");
    fprintf(fp, "========= lotto649 =========");
    fprintf(fp, "\n");
    int sel_num[5][NUMBER_TICKET] = {0};
    for(int a=0;a<5;a++){
    for (int i = 0; i < N; i++) {
        
        int count = 0;
    
        while (count < NUMBER_TICKET) {
            int num = rand() % MAX_NUMBER + 1;
            int stop = 0;
            
            for (int j = 0; j < count; j++) {
                if (sel_num[a][j] == num) {
                    stop = 1;
                    break;
                   }
                }
            
                if (!stop) {
                    sel_num[a][count] = num;
                    count++;
                }
            }
        }
    }   

for (int a = 0; a < 5; a++) {
        fprintf(fp, "[%d]: ", a + 1);
        for (int k = 0; k < NUMBER_TICKET; k++){
            if(c>=N){
                fprintf(fp, "__ "); 
            }
        else{
            fprintf(fp, "%02d ", sel_num[a][k]); 
            }
        }
    c++;
        fprintf(fp, "\n");
    }   
    
    fprintf(fp, "========= csie@CGU =========");
    fclose(fp);
    return 0;
}
