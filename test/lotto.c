#include <stdio.h>
#include <stdlib.h>


int main() {
    int N;
    scanf("%d", &N);
    srand(1);  
    FILE *fp = fopen("lotto.txt", "w");
    fprintf(fp, "========= lotto649 =========");
    fprintf(fp, "\n");
    int sel_num[5][7] = {0};
    for(int a=0;a<5;a++){
    for (int i = 0; i < N; i++) {
        
        int count = 0;
    
        while (count < 7) {
            int num = rand() % 69 + 1;
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
        fprintf(fp, "[%d]:", a + 1);
        for (int k = 0; k < 7; k++){
            if(a>=N){
                fprintf(fp, " __"); 
            }
        else{
            fprintf(fp, " %02d", sel_num[a][k]); 
            }
        }
        fprintf(fp, "\n");
    }   
    
    fprintf(fp, "========= csie@CGU =========");
    fclose(fp);
    return 0;
}
