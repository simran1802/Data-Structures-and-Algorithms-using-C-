#include<iostream>
using namespace std;

int main(){
	
	char ar[] = "manan";
	int h=0,x=0;
	int i;
	
	for(i=0;ar[i]!='\0';i++){
		x = 1;
		x = x<<(ar[i]-97);
		
		if((x&h) > 0)
			cout<<ar[i]<<"";
		else
			h = x|h;
			
	}
	
	
	
	return 0;
}
