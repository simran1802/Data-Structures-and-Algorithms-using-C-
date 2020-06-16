#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node *next;
	
}*first=NULL,*second=NULL,*third=NULL;

void create(int a[],int n){
	int i;
	Node *t,*last;
	first=new Node();
	first->data = a[0];
	first->next = NULL;
	last=first;
	
	for(i=1;i<n;i++){
		t = new Node();
		t->data = a[i];
		t->next = NULL;
		last->next=t;
		last=t;
		
	}
}

void create2(int a[],int n){
	int i;
	Node *t,*last;
	second=new Node();
	second->data = a[0];
	second->next = NULL;
	last=second;
	
	for(i=1;i<n;i++){
		t = new Node();
		t->data = a[i];
		t->next = NULL;
		last->next=t;
		last=t;
		
	}
}

void display(Node *p){
	while(p!=NULL){
		cout<<p->data<<" ";
		p=p->next;
		
	}
}

void concat(Node *p, Node *q){
	third=p;
	while(p->next!=NULL)
		p=p->next;
	p->next=q;
	
}

void merge(Node *p, Node *q){
	Node *last;
	if(p->data<q->data){
		third=last=p;
		p=p->next;
		third->next=NULL;
	}
	
	else{
		third=last=q;
		q=q->next;
		third->next=NULL;
	}
	
	while(p && q){
		if(p->data < q->data){
			last->next=p;
			last=p;
			p=p->next;
			last->next=NULL;
			
		}
		
		else{
			last->next=q;
			last=q;
			q=q->next;
			last->next=NULL;
		}
	}
	
	if(p!=NULL)
		last->next = p;
	if(q!=NULL)
		last->next = q; 
}
int main(){
	int a[] = {8,18,28,12,4};
	int b[] = {1,9,20,22,30};
	create(a,5);
	create2(b,5);
	
	merge(first,second);
	cout<<"Merged : ";
	display(third);
	cout<<"\n\n";

	return 0;
}
