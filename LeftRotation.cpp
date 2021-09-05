#include<bits/stdc++.h>
using namespace std;

int main(){
    int x,y;
    cin>>x>>y;
    int i =x-y;
    int arr[x];
    for (i;i<x;i++){
        cin>> arr[i];
    }
    for (i=0;i<x-y;i++){
        cin>> arr[i];
    }

    for (int j=0;j<x;j++){
        cout<< arr[j]<<" ";
    }

    return 0;
}