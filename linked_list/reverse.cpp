#include<iostream>
#include<cstdlib>
using namespace std;
typedef struct Node{
	int data;
	struct Node *next;
}node;
void printList(node *head){
	while(head!=NULL){
		cout << head->data << " ";
		head=head->next;
	}
	cout << endl;
}
void reverse(node **head){
	node *prev=NULL;
	node *curr=*head;
	node *next;
	while(curr!=NULL){
		next=curr->next;
		curr->next=prev;
		prev=curr;
		curr=next;
	}
	*head=prev;
}
void push(node **head, int new_data){
	node *new_node=(node*)malloc(sizeof(node));
	new_node->data=new_data;
	new_node->next=*head;
	*head=new_node;
}
int main(){
	node *start = NULL;
	push(&start, 7);
	push(&start, 6);
	push(&start, 5);
	push(&start, 4);
	push(&start, 3);
	push(&start, 2);
	push(&start, 1);
	
	printList(start);
 	reverse(&start);
 	printList(start);
	return 0;
}
