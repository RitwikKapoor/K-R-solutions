#include <stdio.h>

#include <stdlib.h> /* malloc, calloc, realloc, free */


typedef struct {
        char name[100];
        unsigned short age;
} Person;


int main() {

        int num;

        printf("how many people are there?\n");
        scanf("%d", &num);

        Person **people = (Person **)malloc(num * sizeof(Person*));

        for(int i=0; i<num; i++) {
                Person* p = (Person*) malloc(sizeof(Person));
                printf("What's the name of this person?\n");
                scanf("%s", p->name);

                printf("What's the age of this person?\n");
                scanf("%hu", &p->age);

                people[i] = p;
        }

        for(int i=0; i<num; i++) {
                printf("------- PERSON %d ---------\n", i);
                printf("Name: %s and Age: %hu\n\n", people[i]->name, people[i]->age);
                free(people[i]);
        }
        free(people);

        return 0;
}
