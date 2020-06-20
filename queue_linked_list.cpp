#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node *next;
}*front=NULL,*rear=NULL;

void enqueue(int x){
	Node *t;
	t = new Node();
	if(t==NULL)
		cout<<"Queue is Full";
	else{
		t->data = x;
		t->next = NULL;
		if(front==NULL)
			front=rear=t;
		else{
			rear->next=t;
			rear=t;
		}
	}
}

int dequeue(){
	int x=-1;
	Node *t;
	if(front==NULL)
		cout<<"QUeue is Empty";
	else{
		t=front;
		x=front->data;
		front=front->next;
		delete t;
	}
	return x;
}

void display(){
	Node *p=front;
	while(p){
		cout<<p->data<<" ";
		p=p->next;
		
	}
	cout<<"\n";
}

int main(){
	enqueue(2);
	enqueue(4);
	enqueue(8);
	enqueue(18);
	enqueue(28);
	display();
	return 0;
}
