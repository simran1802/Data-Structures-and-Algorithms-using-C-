#include<iostream>
using namespace std;

void swap(int *x,int* y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int partition(int arr[],int l,int h){

    int i=l;

    int j=h;

    int pivot=arr[l];

    do{

        do{

            i++;

        }while(arr[i]<=pivot);

        do{

            j--;

        }while(arr[j]>pivot);

        if(i<j){                       

            swap(&arr[i],&arr[j]);

        }

    }while(i<j);

    swap(&arr[l],&arr[j]);

    return j;

}


void quicksort(int a[],int l,int h){

    int j;

    if(l<h){

        j = partition(a,l,h);

        quicksort(a,l,j);

        quicksort(a,j+1,h);

    }

}

int main(){

        int a[ ]={2,8,6,9,3,0,65535};

        int n=sizeof(a)/sizeof(a[0]);

        quicksort(a, 0, n);

        for(int i=0;i<n;i++)

            cout<<a[i]<<"\t";

        cout<<endl;

        return 0;

}
