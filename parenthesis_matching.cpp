#include<iostream>
using namespace std;

class Node{
	public:
		char data;
		Node *next;
}*top=NULL;

void push(char x){
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

char pop(){
	Node *t;
	char x=-1;
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

int isBalance(char *exp){
	int i;
	for(i=0;exp[i]!='\0';i++){
		if(exp[i]=='(')
			push(exp[i]);
		else if(exp[i]==')'){
			if(top==NULL)
				return 0;
			pop();
			
		}
	}
	
	if(top==NULL)
		return 1;
	else
		return 0;
}
int main(){
	char *exp = "((a+b)*(c-d))";
	cout<<isBalance(exp);
	return 0;
}
