#include<stdio.h>
void squeeze(char s1[], char s2[], char s[]);
int main(){
	char s1[] = "abcdabchgffww";
	char s2[] = "fb";
	char s[100];

	printf("\nOriginal string: %s\n", s1);
	squeeze(s1,s2,s);
	printf("\nModified string: %s\n", s);

	return 0;
}
void squeeze(char s1[], char s2[], char s[]){
        int i,j,k;
        for(i = 0, j = 0; s1[i] != '\0'; i++){
                for(k = 0; s2[k] != '\0'; k++){
                        if(s1[i] == s2[k])
                                break;
                }
                if(s2[k] == '\0')
                        s[j++] = s1[i];
        }
        s[j] = '\0';
}
