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

int count(Node *p){
	int c=0;
	while(p){
		c++;
		p=p->next;
		
	}
	return c;
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

void insert(Node *p, int index,int x){
	Node *t;
	int i;
	if(index<0 || index>count(p))
		return;
	t = new Node();
	t->data = x;
	if(index == 0){
		t->next = first;
		first = t;
		
	}
	else{
		for(i=0;i<index-1;i++)
			p=p->next;
		
		t->next = p->next;
		p->next = t;
		
	}
}

void sorted_insert(Node *p,int x){
	Node *t ,*q=NULL;
	t = new Node();
		t->data=x;
		t->next = NULL;
	if(first==NULL)
		first=t;
	else{
		while(p && p->data<x){
			q=p;
			p=p->next;
		}
		if(p==first){
			t->next=first;
			first=t;
			
		}
		else{
			t->next=q->next;
			q->next=t;
		}
	}
}

int Delete(Node *p,int index){
	Node *q;
	int x=-1,i;
	
	if(index<1 || index>count(p))
		return -1;
	
	if(index==1){
		q=first;
		x=first->data;
		first=first->next;
		delete q;
		return x;
	}
	
	else{
		for(i=0;i<index-1;i++){
			q=p;
			p=p->next;
		}
		
		q->next= p->next;
		x=p->data;
		delete p;
		return x;
	}
	
}

int is_sorted(Node *p){
	int x = -65536;
	
	while(p!=NULL){
		if(p->data < x)
			return 0;
		
		x= p->data;
		p= p->next;
		
	}
	return 1;
}

void remove_dup(Node *p){
	Node *q= p->next;
	
	while(q != NULL){
		if(p->data != q->data){
			p=q;
			q= q->next;
			
		}
		else{
			p->next = q->next;
			delete q;
			q= p->next;
			
		}
	}
}

void reverse1(Node *p){
	int *a,i=0;
	Node *q=p;
	a = new int[count(p)];
	
	while(q!=NULL){
		a[i]= q->data;
		q= q->next;
		i++;
	}
	q=p;
	i--;
	while(q!=NULL){
		q->data = a[i];
		q= q->next;
		i--;
	}
}

void reverse2(Node *p){
	Node *q=NULL, *r=NULL;
	
	while(p!=NULL){
		r=q;
		q=p;
		p=p->next;
		q->next=r;
		
	}
	first=q;
}

int main(){
	Node *temp;
	int a[] = {8,18,28,12};
	create(a,4);
//	remove_dup(first);
	reverse2(first);
//	cout<<"Deleted element: \n"<<Delete(first,4);
//	if(is_sorted(first)){
//		cout<<"Sorted!!";
//	}
//	else{
//		cout<<"Not Sorted!!";
//	}

//	insert(first,0,4);
//	insert(first,1,8);
//	insert(first,2,18);
//	insert(first,3,28);
//	rec_display(first);
//	cout<<"Count: "<<count(first);
//	cout<<"Recursive Count: "<<rec_count(first);
//	cout<<"Sum is: "<<add(first);
//	cout<<"Maximum: "<<max(first);
//	temp = Lsearch(first,18);
//	temp = eff_Lsearch(first,18);
//	if(temp)
//		cout<<"Key found :"<<temp->data<<"\n";
//	else
//		cout<<"Key not found"<<"\n";
	display(first);
	
	return 0;
}
