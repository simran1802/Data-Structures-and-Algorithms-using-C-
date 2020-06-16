#include<iostream>
using namespace std;
 
class lower_triangle
{
private:
int *a;
int n;
public:
lower_triangle()
{
n=2;
a=new int [2*(2+1)/2];
}
lower_triangle(int n)
{
this->n=n;
a=new int[n*(n+1)/2];
}
~lower_triangle()
{
delete []a;
}
void setter(int i,int j,int x);//Declaration was missing
int get(int i, int j);//Declaration was missing
void display();//Declaration was missing
};
void lower_triangle::setter(int i, int j, int x)
{
if(i>=j)
{
a[i*(i-1)/2 + j-1]=x;//It should be 'a[i-1]=x;' not 'x=a[i-1];'
}
return;
}
int lower_triangle::get(int i, int j)
{
if(i>=j)
{
return a[i*(i-1)/2 + j-1];
}
return 0;
}
void lower_triangle::display()
{
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{
if(i>=j)
{
cout<<a[i*(i-1)/2 + j-1]<<" ";
}
else{
cout<<0<<" ";
}
}
cout << endl;
}
}
int main()
{
	int d;
	cout<<"Enter dimensions:";
	cin>>d;
	
	lower_triangle lt(d);
	
	int x;
	cout<<"Enter all elements:";
	for(int i=1;i<=d;i++){
		for(int j=1;j<=d;j++){
			cin>>x;
			lt.setter(i,j,x);
			
		}
	}
	lt.display();
	return 0;
} 
