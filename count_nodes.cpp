#include<iostream>
#include<cmath>

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

int rec_count(Node *p){
	if(p==NULL)
		return 0;
	else
		return count(p->next) +1;
}

int add(Node *p){
	int sum=0;
	while(p!=0){
		sum += p->data;
		p=p->next;
		
	}
	return sum;
}

void middle_1(Node *p){
	    Node *q = p;
    while (q){
        q = q->next;
        if (q){
            q = q->next;
        }
        if (q){
            p = p->next;
        }
    }
    cout << "Middle Element (Method-II): " << p->data << endl;
}
int main(){
	int a[] = {8,18,28,12,4};
	create(a,5);
//	rec_display(first);
	cout<<"Count: "<<count(first);
	cout<<"Recursive Count: "<<rec_count(first);
	cout<<"Sum is: "<<add(first);
	middle_1(first);
	return 0;
}
