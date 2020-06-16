#include<iostream>
using namespace std;

class Node{
public:

int data;
Node *next;
}*head;

void create(int a[],int n){

int i;

Node *t,*last;


head = new Node();


head->data=a[0];


head->next=head;


last=head;


for(i=1;i<n;i++){

t = new Node();
t->data = a[i];
t->next = head;
last->next=t;
last=t;


}


}




void display(Node *h){


do{


cout<<h->data;


h = h->next;


}


while(h!=head);


cout<<"\n";


}




int Length(Node *p){


int len=0;


do{


len++;


p=p->next;


}


while(p!=head);


return len;


}




void insert(Node *p,int index,int x){


Node *t;


int i;


if(index<0 || index>Length(p))


return;


if(index==0){


t = new Node();


t->data=x;


if(head==NULL){


head=t;


head->next=head;


}


else{


while(p->next != head)p=p->next;


p->next=t;


t->next=head;


head=t;


}


}


else{


for(i=0;i<index-1;i++)p=p->next;


t=new Node();


t->data=x;


t->next=p->next;


p->next=t;


}


}




void rec_display(Node *h){


static int flag=0;


if(h!=head || flag==0){


flag=1;


cout<<h->data<<" ";


rec_display(h->next);


}


flag=0;


}



int main(){
int a[] = {4,8,18,28,31};
create(a,5);
insert(head,5,10);
rec_display(head);
return 0;


}
