#include<iostream>
#include<cmath>
using namespace std;

class Node{
	public:
		Node *prev;
		int data;
		Node *next;
	
}*first=NULL;

void create(int a[],int n){
	Node *t,*last;
	int i;
	first = new Node();
	first->data=a[0];
	first->prev=first->next=NULL;
	last=first;
	
	for(i=1;i<n;i++){
		t=new Node();
		t->data=a[i];
		t->next=NULL;
		t->prev=last;
		last->next=t;
		last=t;
		
	}
}

void display(Node *p){
	while(p){
		cout<<p->data;
		p=p->next;
		
	}
	cout<<"\n";
}


int Length(Node *p){
	int l=0;
	while(p){
		l++;
		p=p->next;
	}
	return l;
	
}



int main(){
	int a[]={2,4,8,18,28};
	create(a,5);
	display(first);
	cout<<"Length:"<<Length(first);
	return 0;
}
