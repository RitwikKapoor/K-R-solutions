#include<stdio.h>
#define MAX 26

int main(){
        int ch, cnt = 0;

        int freq[MAX] = {0};

        while((ch = getchar()) != EOF){
                if(ch == ' ' || ch == '\t' || ch == '\n'){
                        continue;
                }
                freq[ch - 'a']++;
        }
        for(int i = 0; i < MAX; i++){
                if(freq[i] == 0) continue;
                printf("\n%c ",(char)(i + 'a'));
                while(freq[i] > 0){
                        printf("* ");
                        freq[i]--;
                }
        }
        printf("\n");
        return 0;
}

