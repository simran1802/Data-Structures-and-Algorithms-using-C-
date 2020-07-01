#include<iostream>
using namespace std;

void swap(int *x,int* y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
void merge(int a[],int l,int mid,int h){
    int i=l,j=mid+1,k=l;
    int b[100];
    
    while(i<=mid && j<=h){
        if(a[i]<a[j])
            b[k++]=a[i++];
        else
            b[k++]=a[j++];
            
    }
    
    for(;i<=mid;i++)
        b[k++]=a[i];
    for(;j<=h;j++)
        b[k++]=a[j];
        
    for(int i=l;i<=h;i++)
        a[i]=b[i];
        
}

void IMergesort(int a[],int n){
    int p,i,l,h,mid;
    
    for(p=2;p<=n;p=p*2){
        for(i=0;i+p-1<n;i=i+p){
            l=i;
            h=i+p-1;
            mid = (l+h)/2;
            merge(a,l,mid,h);
        }
    }
    if(p/2 < n)
        merge(a,0,p/2-1,n-1);
}

void RMergesort(int a[],int l,int h){
    if(l<h){
        int mid=(l+h)/2;
        RMergesort(a,0,mid);
        RMergesort(a,mid+1,h);
        merge(a,l,mid,h);
    }
}
int main(){
    int a[] = {2,4,1,8,5,28,18,6};
    int n= sizeof(a)/sizeof(a[0]);
    int i;
    // selection_sort(a,n);
    RMergesort(a,0,n+1);
    for(i=1;i<n;i++)
        cout<<" "<<a[i];
    return 0;
}
