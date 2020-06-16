#include<iostream>
#include<cmath>
using namespace std;


class Node{
	public:
		int coeff;
		int exp;
		Node *next;
		
}*poly=NULL;

void create(){
	Node *t,*last;
	int num,i;
	
	cout<<"Enter number of terms:";
	cin>>num;
	cout<<"Enter each term with coeff and exp";
	for(i=0;i<num;i++){
		t=new Node();
		cin>>t->coeff>>t->exp;
		t->next=NULL;
		if(poly==NULL){
			poly=last=t;
			
		}
		else{
			last->next=t;
			last=t;
			
		}
	}
}

void display(Node *p){
	while(p){
		cout<<p->coeff<<" x "<<p->exp;
		p=p->next;
		
	}
	cout<<"\n";
	
}

int eval(Node *p,int x){
	long val;
	
	while(p){
		val += p->coeff * pow(x,p->exp);
		p=p->next;
		
	}
	return val;
	
}
int main(){
	
//	return 0;
	create();
	display(poly);
	cout<<" "<<eval(poly,1);
	
}
