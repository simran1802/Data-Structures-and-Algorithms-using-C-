#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node *next;
}*top=NULL;

void push(int x){
	Node *t;
	t = new Node();
	
	if(t==NULL)
		cout<<"Overflow!!";
	else{
		t->data=x;
		t->next=top;
		top=t;
	}
}

int pop(){
	Node *t;
	int x=-1;
	if(top==NULL)
		cout<<"Underflow!!";
	else{
		t=top;
		top=top->next;
		x=t->data;
		delete t;
		
	}
	return x;	
}

void display(){
	Node *p;
	p=top;
	while(p!=NULL){
		cout<<p->data<<" ";
		p=p->next;
	}
	cout<<"\n";
	
}
int main(){
	push(8);
	push(18);
	push(28);
	push(31);
	pop();
	pop();
	display();
	
	return 0;
}
