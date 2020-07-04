#include<iostream>
#include<queue>
using namespace std;
void DFS(int vtx,int a[][8],int n){
    queue<int> Q;
    static int visited[8] {0};
    int j;
    
    if(visited[vtx]==0){
        cout<<vtx;
        visited[vtx] = 1;
        for(j=1;j<=n;j++){
            if(a[vtx][j]==1 && visited[j]==0)
                DFS(j,a,n);
        }
    }
}
int main(){
    int A[8][8] = {{0, 0, 0, 0, 0, 0, 0, 0},
                   {0, 0, 1, 1, 1, 0, 0, 0},
                   {0, 1, 0, 1, 0, 0, 0, 0},
                   {0, 1, 1, 0, 1, 1, 0, 0},
                   {0, 1, 0, 1, 0, 1, 0, 0},
                   {0, 0, 0, 1, 1, 0, 1, 1},
                   {0, 0, 0, 0, 0, 1, 0, 0},
                   {0, 0, 0, 0, 0, 1, 0, 0}};
                   
 DFS(4,A,8);
    
    return 0;
}
