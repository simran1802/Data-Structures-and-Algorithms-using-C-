#include<iostream>
using namespace std;

int findMax(int a[],int n){
    int max=INT32_MIN;
    for(int i=0;i<n;i++){
        if(a[i]>max)
            max= a[i];
            
    }
    return max;
}
void countsort(int a[],int n){
    int i,j,max,*c;
    
    c= new int[max+1];
    
    for(i=0;i<max+1;i++)
        c[i]=0;
        
    for(i=0;i<n;i++){
        c[a[i]]++;
    }
    i=0, j=0;
    while(i<max+1){
        if(c[i]>0){
            a[j++]=i;
            c[i]--;
            
        }
        else
            i++;
            
    }
    
}
int main(){
    int a[] = {2,4,1,8,5,28,18,6};
    int n= sizeof(a)/sizeof(a[0]);
    int i;
    countsort(a,n);
    for(i=1;i<n;i++)
        cout<<" "<<a[i];
    return 0;
}
