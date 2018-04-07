#include<bits/stdc++.h>
#define siz 100
using namespace std;

int ans[siz][siz];

void multiplication(int first[siz][siz], int second[siz][siz],int n)
{
    int i,j,k,sum,mul[siz][siz];
    i=0;
    while(i<n)
    {
        for (j=0; j<n; j++)
        {
                sum=0;
                for (k=0; k<n; k++) sum = sum + first[i][k]*second[k][j];
                mul[i][j]=sum;
        }
            i++;
    }
    printf("Multipication of A&B:\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++) printf("%d ",mul[i][j]);
        printf("\n");
    }
    memcpy(ans, mul, sizeof(ans));
}
int main()
{
    int node,edge;
    int adj[siz][siz]={0};
    cin>>node>>edge;
    int a,b;
    for(int i=0; i<edge; i++)
    {
        cin>>a>>b;
        adj[a][b]=1;
    }
    multiplication(adj,adj,node);
    multiplication(ans,adj,node);
    multiplication(ans,adj,node);
}
