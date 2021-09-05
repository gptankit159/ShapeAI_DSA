#include<bits/stdc++.h>
using namespace std;

int main(){
    int words =1;
    string input_s;
    cin >> input_s;
    for (int i=0;i<input_s.length();i++){
        if(isupper(input_s[i]))
            words++;
    } 
    cout<<words;

    return 0;
}