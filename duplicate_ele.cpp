#include<iostream>
using namespace std;

int main(){
	int last_dup = 0;
	int a[] = {2,2,2,2,2,4,8,8,8,18,18,18,28,28};
	int n =sizeof(a) / sizeof(a[0]);
	for(int i=0;i<n;i++){
		if(a[i]==a[i+1] && a[i] != last_dup){
//			cout<<" "<<a[i];
			int j = i+1;
			while(a[j] == a[i])
			j++;
			cout<<"Number of duplicates:"<<j-i;
			i =j-1;	
//			last_dup = a[i];
		}
		
	}
	return 0;
}
