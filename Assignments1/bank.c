#include<stdio.h>
#include<stdlib.h>


typedef struct{
	char name[50];
	int acc;
	long balance;
} Customer;

int compare(const void *a, const void *b) {
    Customer *c1 = *(Customer **)a;
    Customer *c2 = *(Customer **)b;
    return (c1->balance - c2->balance);
}

int main(){
	int num;
	printf("How many customers do you want to add?\n");
	scanf("%d", &num);

	Customer **customers = (Customer **)malloc(num * sizeof(Customer*));

	for(int i = 0; i < num; i++){
		Customer* c = (Customer *)malloc(sizeof(Customer));
		printf("\nEnter details for person %d\n", i);
		printf("Enter your name: ");
		scanf("%s", c->name);
		printf("Enter your account number: ");
		scanf("%d", &c->acc);
		printf("Enter your balance: ");
		scanf("%ld", &c->balance);

		customers[i] = c;
	}

	qsort(customers, num, sizeof(Customer *), compare);

	printf("\n");

	for(int i = 0; i < num; i++){
		printf("-------Person %d ---------\n", i);
		printf("Name: %s Account Number: %d Balance: %ld\n", customers[i]->name, customers[i]->acc, customers[i]->balance);
		free(customers[i]);
	}

	free(customers);

	return 0;
}
