#include<stdio.h>
int main(){
	char *s = "abc";
	*s = 'x';
	printf("%s\n", s) ; //here s is a string literal which is read only
	  //read-only parts of the memory, and making s a pointer to that makes any writing operation on this memory illegal. 

	 char st[] = "abcd";
         st[0] = 'x';
    	 printf("%s\n", st); //character array can be modidfied
//puts the literal string in read-only memory and copies the string to newly allocated memory on the stack making modification legal
	return 0;
}
