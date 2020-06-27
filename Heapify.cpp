#include<iostream>
using namespace std;

void swap(int a[],int i,int j){
    int temp;
    temp=a[i];
    a[i]=a[j];
    a[j]=temp;
}

int Delete(int a[],int n){
    int x=a[1];
    a[1]=a[n];
    
    int i=1;
    int j=i*2;
    while(j<n-1){
        if(a[j]<a[j+1])
            j++;
        if(a[i]<a[j]){
            swap(a[i],a[j]);
            i=j;
            j=j*2;
        }
        
        else
            break;
            
        
    }
    return x;
}

void heapify(int a[],int n){
    for(int i=n/2;i>=1;i--){
        int j= 2*i;
        while(j<=n-1){
            if(a[j]<a[j+1])
                j++;
            if(a[i]<a[j]){
                swap(a[i],a[j]);
                i=j;
                j=2*i;
                
            }
            else
                break;
                
        }
    }
}

template <class T>
void Print(T& vec, int n, string s){
    cout << s << ": [" << flush;
    for (int i=1; i<n+1; i++){
        cout << vec[i] << flush;
        if (i < n){
            cout << ", " << flush;
        }
    }
    cout << "]" << endl;
}

int main(){
    int A[] = {5, 10, 30, 20, 35, 40, 15};
    Print(A, sizeof(A)/sizeof(A[0]), "A");
 
    heapify(A, sizeof(A)/sizeof(A[0]));
    Print(A, sizeof(A)/sizeof(A[0]), "Heapified A");
    cout << endl;
    
    int B[] = {5, 10, 30, 20};
    Print(B, sizeof(B)/sizeof(B[0]), "B");
 
    heapify(B, sizeof(B)/sizeof(B[0]));
    Print(B, sizeof(B)/sizeof(B[0]), "Heapified B");
    return 0;
}
