#include <iostream>
    using namespace std;
    int min(int A[],int n)
    {
        int m=A[0];
        for(int i=0;i<n;i++)
        {
            if(A[i]<m)
                m=A[i];
        }
        return m;
    }
    int max(int A[],int n)
    {
        int m=A[0];
        for(int i=0;i<n;i++)
        {
            if(A[i]>m)
                m=A[i];
        }
        return m;
    }
    void FindCountDuplic_inSorted(int n, int A[])
    {
        int low = min(A,n);
        int high = max(A,n);
     
        int *H = new int[high+1]{0};
        for (int i=0; i<n; i++)
        {
            H[A[i]]++;
        }
        for (int i=low; i<=high; i++)
        {
            if (H[i]>1)
                cout<<i<<" is appearing "<<H[i]<<" times "<<endl;
        }
    }
    int main()
    {
        int n=10;
        int A[n]={8,3,6,4,6,5,6,8,2,7};
        FindCountDuplic_inSorted(n,A);
    }
