#include<stdio.h>
#include<stdlib.h>

struct Node {
	int data;
	struct Node* next;
};

void traverse(struct Node* ptr){
	while(ptr != NULL){
		printf("%d ", ptr->data);
		ptr = ptr->next;
	}
	printf("\n");
}

struct Node* insertFirst(struct Node* head, int data){
	struct Node* new_node = (struct Node*)(malloc(sizeof(struct Node)));
	new_node->data = data;
	new_node->next = head;
	return new_node;
}

void insertEnd(struct Node* head, int data){
	struct Node* new_node = (struct Node*)(malloc(sizeof(struct Node)));
	new_node->data = data;
	new_node->next = head;
	struct Node* temp = head;

	while(temp->next != NULL){
		temp = temp->next;
	}

	temp->next = new_node;
	new_node->next = NULL;
}


struct Node* deletetFirst(struct Node* head){
	struct Node* temp = head;
	head = head->next;
	free(temp);
	return head;
}


void deletetLast(struct Node* head){
	struct Node* temp = head;
	struct Node* temp_next = head->next;
	while(temp_next->next != NULL){
		temp_next = temp_next->next;
		temp = temp->next;
	}
	temp->next = NULL;
	free(temp_next);
}


int main(){
	struct Node* head = NULL;
	head = insertFirst(head,5);
	head = insertFirst(head,6);
	insertEnd(head,8);
        insertEnd(head,9);
	traverse(head);	
	deletetLast(head);
	traverse(head);

	return 0;
}
