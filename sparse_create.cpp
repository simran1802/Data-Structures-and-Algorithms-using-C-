#include<iostream>
using namespace std;

class element{
	public:
		int i;
		int j;
		int x;
		
};
class sparse{
	private:
		int m;
		int n;
		int num;
		element *e;
	public:
		sparse(int m,int n,int num){
			this->m = m;
			this->n = n;
			this->num = num;
			e = new element[this->num];
			
		}
		
		~sparse(){
			delete [] e;
			
		}
		
		void read(){
			cout<<"Enter non-zero elements:";
			for(int i=0;i<num;i++){
				cin>>e[i].i>>e[i].j>>e[i].x;
				
			}
		}
		
		void display(){
			int k=0;
			for(int i=0;i<m;i++){
				for(int j=0;j<n;j++){
					if(e[k].i == i && e[k].j == j)
						cout<<e[k++].x<<" ";
					else
						cout<<"0 ";
				}
					cout<<endl;
				
			}
		}
};

int main(){
	sparse s(5,5,5);
	s.read();
	s.display();
	return 0;
}
