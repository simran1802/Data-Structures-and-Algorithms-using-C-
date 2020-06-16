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
int main(){
	int a[] = {8,18,28,12,4};
	create(a,5);
//	rec_display(first);
//	cout<<"Count: "<<count(first);
//	cout<<"Recursive Count: "<<rec_count(first);
//	cout<<"Sum is: "<<add(first);
	cout<<"Maximum: "<<max(first);
	return 0;
}
