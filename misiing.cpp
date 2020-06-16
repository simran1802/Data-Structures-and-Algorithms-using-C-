#include<iostream>
using namespace std;

int max(int a[], int n){
	int mx=a[0];
	for(int i=0;i<n;i++){
		if(a[i] > mx)
			mx = a[i];
	}
	return mx;
}
int main(){
	int n,i;
	cout<<"Enter number of elements:";
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	
	cout<<"Numbers are:";
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
	cout<<endl;
	int l=a[0];
	int h = max(a,n)+1;
	
	int *H= new int[h];
	for(i=0;i<h;i++)
	H[i] = 0;
	
	cout<<"Hash table:";
	for(i=0;i<=h;i++)
	cout<<H[i]<<" ";
	
	for(i=0;i<n;i++)
	H[a[i]]++;
	
	cout<<"Missing elements:"<<endl;
	for(i=0;i<h;i++){
		if(H[i] == 0)
		cout<<i<<" ";
		
	}
	cout<<endl;
	return 0;
}
