#include <stdio.h>
// #include<wchar.h> also see w_int 

int main() {
    int val = 178;
    printf("Integer value with minimum width 4: %4d\n", val);

    float x = 3.14159;
    printf("The value of x is %.2f\n", x);

    char *str = "hello whole world";
    printf("%25s\n", str); //prints with space on left
    printf("%.10s\n", str); //prints only first 10 characters
    printf("%-25s good\n", str); // prints with space on right

    //char str2[200];
    //scanf("%10s", str2); // scans only first 10 characters given
    //printf("%s\n", str2);

    printf("%*d\n", 5,123); // same as %5d but allow us to give changeable values
			    
    int a = 1, b = 2, c = 3;
    printf("%3$d %1$d %2$d\n", a,b,c); //help us in deciding the order
				
    int y = 10;
    printf("%08x\n",y);
    

    //char str3[200];
    //scanf("%[^\n]", str3); // This is not yet clear to me
   
    return 0;
}

