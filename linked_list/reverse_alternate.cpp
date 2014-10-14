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
void reverseAlt(node *odd){
	if(odd==NULL||odd->next==NULL || odd->next->next==NULL)
		return;
	node *even = odd->next;
	odd->next=odd->next->next;
	odd=odd->next;
	even->next=NULL;
	while(odd && odd->next){
		node *temp=odd->next->next;
		odd->next->next=even;
		even=odd->next;
		odd->next=temp;
		if(temp!=NULL)
			odd=temp;
	}
	odd->next=even;
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
 	reverseAlt(start);
 	printList(start);
	return 0;
}
