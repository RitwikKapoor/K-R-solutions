#include<stdio.h>
int any(char s1[], char s2[]);
int main(){
	char s1[] = "abcdabchgffww";
	char s2[] = "f";

	printf("\nOriginal string: %s\n", s1);
	printf("\nPostion: %i\n", any(s1,s2));

	return 0;
}
int any(char s1[], char s2[]){
        int i,j,pos = -1;
        for(i = 0; s1[i] != '\0'; i++){
                for(j = 0; s2[j] != '\0'; j++){
                        if(s1[i] == s2[j]){
				pos = i;
				break;
			}
                }
		if(pos != -1) break;
        }
	return pos;
}
