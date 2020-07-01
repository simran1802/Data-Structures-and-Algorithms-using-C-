#include<iostream>
using namespace std;

void swap(int *x,int* y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

void insertion_sort(int a[],int n){
    int i,j,x;
    for(i=1;i<n;i++){
        j=i-1;
        x=a[i];
        while(j>-1 && a[j]>x){
            a[j+1]=a[j];
            j--;
        }
        a[j+1] = x;
        
    }   
}
int main(){
    int a[] = {2,4,1,8,5,28,18};
    int n= sizeof(a)/sizeof(a[0]);
    int i;
    insertion_sort(a,n);
    for(i=1;i<n;i++)
        cout<<" "<<a[i];
    return 0;
}
