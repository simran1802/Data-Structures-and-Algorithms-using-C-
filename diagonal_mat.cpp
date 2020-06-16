#include<iostream>
using namespace std;
 
class diagonal
{
private:
int *a;
int n;
public:
diagonal()
{
n=2;
a=new int [2];
}
diagonal(int n)
{
this->n=n;
a=new int[n];
}
~diagonal()
{
delete []a;
}
void setter(int i,int j,int x);//Declaration was missing
int get(int i, int j);//Declaration was missing
void display();//Declaration was missing
};
void diagonal::setter(int i, int j, int x)
{
if(i==j)
{
a[i-1]=x;//It should be 'a[i-1]=x;' not 'x=a[i-1];'
}
return;
}
int diagonal::get(int i, int j)
{
if(i==j)
{
return a[i-1];
}
return 0;
}
void diagonal::display()
{
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{
if(i==j)
{
cout<<a[i]<<" ";
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
diagonal d(4);
d.setter(1,1,5);
d.setter(2,2,8);
d.setter(3,3,8);
d.setter(4,4,12);
d.display();
return 0;
} 
