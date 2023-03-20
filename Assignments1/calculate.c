#include<stdio.h>

int add(int a, int b){
	return a + b;
}

int product(int a, int b){
	return a * b;
}

int calculate(int a, int b, int (*func)(int, int)){
	return func(a,b);
}

int main(){
	int x = 10;
	int y = 5;

	int sum = calculate(x,y,add);
	int mul = calculate(x,y,product);

	printf("Sum and Product of %d and %d is %d and %d\n",x,y,sum,mul);

}
