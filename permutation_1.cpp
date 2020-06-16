#include<iostream>
using namespace std;

void swap(int a,int b){
	int t;
	t = a;
	a = b;
	b = t;
}
void perm(char s[],int l,int h){
	int i;
	if(l == h){
		cout<<s<<"\n";
		
	}
	else{
		for(i=l;i<=h;i++){
			swap(s[l],s[i]);
			perm(s,l+1,h);
			swap(s[l],s[i]);
		}
	}
}
int main(){
	char s[] = "abc";
	perm(s,0,2);
	return 0;
}
