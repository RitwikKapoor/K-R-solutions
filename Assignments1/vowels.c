#include<stdio.h>
#include<string.h>

int countVowels(char* str){
	int cnt = 0;
	for(int i = 0; i < strlen(str); i++){
		char ch = str[i];
		if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
			ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') cnt++;
	}
	return cnt;
}

int main(){
	char str[100];
	printf("Enter the string: ");
	scanf("%[^\n]", str);
	
	int (*func)(char*) = countVowels;

	int cnt = func(str);
	printf("Count of vowels = %d\n", cnt);

	return 0;
}
