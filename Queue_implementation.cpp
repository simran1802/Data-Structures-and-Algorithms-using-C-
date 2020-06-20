#include<iostream>
using namespace std;

class Queue{
	public:
		int size;
		int front;
		int rear;
		int *Q;
	
};

void create(Queue *q,int size){
	q->size=size;
	q->front=q->rear=-1;
	q->Q = new int[q->size];
	
}

void enqueue(Queue *q,int x){
	if(q->rear==q->size-1)
		cout<<"Queue is full";
	else{
		q->rear++;
		q->Q[q->rear] = x;
		
	}
} 

int deque(Queue *q){
	int x=-1;
	if(q->front==q->rear)
		cout<<"Queue is empty";
	else{
		q->front++;
		x=q->Q[q->front];
		
	}
	return x;
}

void display(Queue q){
	for(int i=q.front+1;i<q.rear;i++)
		cout<<q.Q[i]<<" ";
	cout<<"\n";
		
}
int main(){
	Queue q;
	create(&q,5);
	enqueue(&q,2);
	enqueue(&q,4);
	enqueue(&q,8);
	enqueue(&q,18);
	enqueue(&q,28);
	
	cout<<" "<<deque(&q);
	display(q);
	
	
	return 0;
}
