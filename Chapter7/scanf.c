#include<stdio.h>
int main(){

//Example 1	
int a, b;
printf("Enter two integers: ");
if (scanf("%d %d", &a, &b) == 2) {
    printf("You entered %d and %d.\n", a, b);
} else {
    printf("Invalid input.\n");
}

//Example 2
double sum,v;
while(scanf("%lf", &v) == 1){
	printf("\t%.2f\n", sum += v);
}

//Example 3
char str[] = "3.14159 Hello";
double pi;
char message[20];
if (sscanf(str, "%lf %s", &pi, message) == 2) {
       printf("You entered %.5f and '%s'.\n", pi, message);
} else {
       printf("Invalid input.\n");
}


return 0;
}
