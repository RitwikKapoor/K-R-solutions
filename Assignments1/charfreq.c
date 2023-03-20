#include<stdio.h>
#include<string.h>
#include<ctype.h>

#define MAX 200

int main() {
    char str[MAX];
    int freq[52] = {0}; 

    printf("Enter a string: ");
    scanf("%s", str);

    for (int i = 0; i < strlen(str); i++) {
        if(isupper(str[i])){
		freq[str[i] - 'A' + 26]++;	
	}else{
		freq[str[i] - 'a']++;
	}
    }

    printf("Frequency of each character:\n");
    for (int i = 0; i < 52; i++) {
        if (freq[i] != 0) {
		if(i < 26)			
             		printf("%c: %d\n", (char)(i + 'a'), freq[i]);
		else	
             		printf("%c: %d\n", (char)(i - 26 + 'A'), freq[i]);
        }
    }

    return 0;
}

