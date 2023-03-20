#include<stdio.h>
#include<string.h>
#include<ctype.h>

char nonRepeat(char* str){	
    int freq[52] = {0};
    for (int i = 0; i < strlen(str); i++) {
        if(isupper(str[i])){
		freq[str[i] - 'A' + 26]++;	
	}else{
		freq[str[i] - 'a']++;
	}
    }

    for(int i = 0; i < strlen(str); i++){	
        if(isupper(str[i])){
		if(freq[str[i] - 'A' + 26] == 1){
			return str[i];
		}	
	}else{
		if(freq[str[i] - 'a'] == 1){
			return str[i];
		}
	}
    }
    return '\0';
}

int main(){
	char str[1000];
	printf("Enter the string: ");
	scanf("%[^\n]", str);
	
	char ch = nonRepeat(str);
	if(ch != '\0')
		printf("First non repeated character: %c\n", ch);
	else 
		printf("All characters repeated\n");
	
}
