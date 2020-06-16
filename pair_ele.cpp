#include<iostream>
using namespace std;

void match(int a[],int n){
	int k;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]+a[j] == k)
				cout<<a[i]<<a[j]<<k;
				
		}
	}
}
int main(){
	int arr[] = {1,3,2,6,8,9,7};
	int n = sizeof(arr) / sizeof(arr[0]);
	match(arr,n);
	return 0;
}
