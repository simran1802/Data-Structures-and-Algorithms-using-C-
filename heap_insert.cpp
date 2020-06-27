#include<iostream>
using namespace std;

void insert(int a[],int n){
    int temp=a[n];
    int i=n;
    
    while(i>1 && temp>a[i/2]){
        a[i] = a[i/2];
        i=i/2;
        
    }
    a[i]=temp;
    
}

template <class T>
void Print(T& vec, int n){
    cout << "Max Heap: [" << flush;
    for (int i=0; i<n; i++){
        cout << vec[i] << flush;
        if (i < n-1){
            cout << ", " << flush;
        }
    }
    cout << "]" << endl;
}
 
 
int main() {
 
    int a[] = {45, 35, 15, 30, 10, 12, 6, 5, 20, 50};
    insert(a, 9);
    Print(a, sizeof(a)/sizeof(a[0]));
    cout << endl;
    
    return 0;
}
