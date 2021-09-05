#include<bits/stdc++.h>
using namespace std;  

int main()
{
    int i, space, j,n;
    cout<<"Enter value of n";
    cin>>n;
    for(i=1; i<=n; i++)
    { 
        for(space=6; space>i; space--)
            cout<<" ";
        for(j=0; j<i; j++)
            cout<<"* ";
        cout<<endl;
    }
    cout<<endl;
    return 0;
}