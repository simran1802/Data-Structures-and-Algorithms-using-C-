#include<iostream>
using namespace std;

int get_dup(int a[],int n){
	for(int i=0;i<n-1;i++){
		int count = 1;
		if(a[i] != -1){
			for(int j=i+1;j<n;j++){
				if(a[i] == a[j]){
					count++;
					a[j] = -1;
					
				}
			}
			
			if(count > 1)
			cout<<a[i]<<" appears "<<count<<endl;
			
		}
	}
}
int main(){
	int arr[] = {1,4,2,5,8,18,2,4,18,8,28,18,28};
	int n = sizeof(arr) / sizeof(arr[0]);
	get_dup(arr,n);
	return 0;
}
