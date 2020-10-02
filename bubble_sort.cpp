#include<iostream>
using namespace std;


void swap(int *x,int* y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

void bubble(int a[],int n){
    int i,j,flag=0;
    for(i=0;i<n-1;i++){
        flag=0;
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                swap(&a[j],&a[j+1]);
                flag=1;
            }
        }
        if(flag==0)
            break;
    }
}


int main(){

        int a[ ]={2,8,6,9,3,0,65535};

        int n=sizeof(a)/sizeof(a[0]);

        bubble(a, n);

        for(int i=0;i<n;i++)

            cout<<a[i]<<"\t";

        cout<<endl;

        return 0;

}



