#include<iostream>
using namespace std;


class Stack{
	public:
		int size;
		int top;
		int *S;
	
};

void create(Stack *st){
	cout<<"Enter size";
	cin>>st->size;
	st->S = new int[st->size];
	st->top=-1;
}

void display(Stack st){
	int i;
	for(i=st.top;i>=0;i--)
		cout<<st.S[i]<<" ";
	cout<<"\n";
}

void push(Stack *st,int x){
	if(st->top==st->size-1)
		cout<<"Stack overflow";
	else{
		st->top++;
		st->S[st->top]=x;
		
	}
}

int pop(Stack *st){
	int x=-1;
	
	if(st->top==-1)
		cout<<"Stack Underflow";
	else{
		x=st->S[st->top--];
		
	}
	return x;
	
}

int peek(Stack st,int index){
	int x=-1;
	if(st.top-index+1 < 0)
		cout<<"Invalid index";
	x=st.S[st.top-index+1];
	return x;
	
	
}

int isEmpty(Stack st){
	if(st.top==-1)
		return -1;
	else
		return st.S[st.top];
}

int isFull(Stack st){
	if(st.top==st.size-1)
		return 1;
	else
		return 0;
}

int main(){
	Stack st;
	create(&st);
	push(&st,2);
	push(&st,4);
	push(&st,8);
	push(&st,18);
	push(&st,28);
	push(&st,30);
	pop(&st);

	display(st);
	peek(st,3);
	return 0;
}
