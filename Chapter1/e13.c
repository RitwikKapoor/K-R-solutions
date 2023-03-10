#include<stdio.h>
#define MAX 100

int main(){
	int ch, cnt = 0;
	
	int freq[MAX] = {0};

	while((ch = getchar()) != EOF){
		if(ch == ' ' || ch == '\t' || ch == '\n'){
			freq[cnt]++;
			cnt = 0;
			continue;
		}
		cnt++;
	}
	for(int i = 0; i < MAX; i++){			
		if(freq[i] == 0) continue;
		printf("\n%d ", i);
		while(freq[i] > 0){
			printf("* ");
			freq[i]--;
		}
	}
	printf("\n");
	return 0;
}
