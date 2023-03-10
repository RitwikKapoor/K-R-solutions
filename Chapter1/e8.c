#include<stdio.h>
int main(){
	int c, n1 = 0, t1 = 0, b1 = 0;
	while((c = getchar()) != EOF){
		if(c == '\n'){
			++n1;
		}
		else if(c == '\t'){
			++t1;
		}
		else if(c == ' '){
			++b1;
		}
	}
	printf("New Lines - %d\n", n1);	
	printf("Tabs - %d\n", t1);
	printf("Blank Spaces- %d\n", b1);
}
