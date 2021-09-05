#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,marks;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>marks;
        if(marks<=35){
            arr[i]=marks;
        }
        else {
            int rem = 5 - (marks%5);
            if (rem<3){
                arr[i]= marks+rem;
            }
            else{
                arr[i]=marks;
            }
        }
    }
    for (int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}