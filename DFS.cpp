#include <iostream>
using namespace std;


int G[20][20], visited[20], n;

void DFS(int i)
{
    int j;

    cout << i << " ";
    visited[i] = 1;

    for (j = 0; j < n; j++)
    {
        if (!visited[j] && G[i][j] == 1)
            DFS(j);
    }
}
int main()
{
    int i,j;
    cout<<"enter the no of vertices:-";
    cin>>n;
    cout<<"enter the adjacency matrix of the graph:-";
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    cin>>G[i][j];
    for(i=0;i<n;i++)
    visited[i]=0;
    cout<<"DFS traversal is:-";
    DFS(0);
    return 0;
}

/* OUTPUT

PS D:\vaibhav> cd "d:\vaibhav\" ; if ($?) { g++ DFS.cpp -o DFS } ; if ($?) { .\DFS }
enter the no of vertices:-4
enter the adjacency matrix of the graph:-
0 1 0 1
1 0 1 0 
0 1 0 1
1 0 1 0
DFS traversal is:-0 1 2 3 
*/