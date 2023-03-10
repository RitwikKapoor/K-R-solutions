#include<stdio.h>
int strrindex(char s[], char t[]);
int main(){
	char s[] = "there are good are phone";
	char t[] = "are";

	int pos = strrindex(s,t);
	printf("\n%d\n", pos);	
	return 0;
}

int strrindex(char s[], char t[]){
	for(int i = 0; s[i] != '\0'; i++){
		if(s[i] == t[0]){
			int k = i, j = 0;
		 	for(; t[j] != '\0'; j++, k++){
				if(s[k] != t[j]){
					break;
				}
				
			}
			if(t[j] == '\0'){
				return i;
			}
		}
	}

	return -1;
}	
