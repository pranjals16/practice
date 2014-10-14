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
node *pairSwap(node *head){
	if(head == NULL || head->next==NULL)
		return head;
	node *p=head,*q=head->next;
	head=q;
	while(true){
		node *r=q->next;
		q->next=p;
		if(r==NULL || r->next==NULL){
			p->next=r;
			break;
		}
		p->next=r->next;
		p=r;
		q=p->next;
	}
	return head;
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
 	node *head=pairSwap(start);
 	printList(head);
	return 0;
}
