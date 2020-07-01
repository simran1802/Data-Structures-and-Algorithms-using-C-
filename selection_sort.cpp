#include<iostream>
using namespace std;

void swap(int *x,int* y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
void selection_sort(int a[],int n){
    int i,j,k;
    for(i=0;i<n-1;i++){
        for(j=k=i;j<n;j++){
            if(a[j] < a[k])
                k=j;
        }
        swap(&a[i],&a[k]);
    }
}
int main(){
    int a[] = {2,4,1,8,5,28,18};
    int n= sizeof(a)/sizeof(a[0]);
    int i;
    selection_sort(a,n);
    for(i=1;i<n;i++)
        cout<<" "<<a[i];
    return 0;
}
