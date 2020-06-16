#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node *next;
	
}*first=NULL;

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

int max(Node *p){
	int m = -32768;
	
	while(p){
		if(p->data>m)
			m = p->data;
		p=p->next;
	}
	return m;
}

void display(Node *p){
	while(p!=NULL){
		cout<<p->data<<" ";
		p=p->next;
		
	}
}

Node * Lsearch(Node *p,int key){
	while(p!=NULL){
		if(key==p->data)
			return p;
		p=p->next;
		
	}
	return NULL;
}

Node * eff_Lsearch(Node *p,int key){
	Node *q=NULL;
	while(p!=NULL){
		if(key==p->data){
			q->next=p->next;
			p->next=first;
			first=p;
			return p;
		}
		q=p;
		p=p->next;
		
	}
	return NULL;
}

Node * Rsearch(Node *p,int key){
	if(p==NULL)
		return NULL;
	if(key==p->data)
		return p;
	return Rsearch(p->next,key);
}
int main(){
	Node *temp;
	int a[] = {8,18,28,12,4};
	create(a,5);
//	rec_display(first);
//	cout<<"Count: "<<count(first);
//	cout<<"Recursive Count: "<<rec_count(first);
//	cout<<"Sum is: "<<add(first);
//	cout<<"Maximum: "<<max(first);
	temp = Lsearch(first,18);
	temp = eff_Lsearch(first,18);
	if(temp)
		cout<<"Key found :"<<temp->data<<"\n";
	else
		cout<<"Key not found"<<"\n";
	display(first);
	
	return 0;
}
